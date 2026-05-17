const { stdin, stdout } = require('process');
const readline = require('readline/promises').createInterface({
    input: stdin,
    output: stdout
});

const hat = '^';
const hole = 'O';
const fieldCharacter = '░';
const pathCharacter = '*';

class Field {
    constructor(fieldHeight, fieldWidth) {
        this.fieldShape = Field.generateField(fieldHeight, fieldWidth);
        this.playerLocation = Field.#findIconLocation(this.fieldShape, pathCharacter);
        this.foundHat = false;
        this.playerFallen = false;
    }
    static #findIconLocation(field, icon) {
        for(let i = 0; i < field.length; i++){
            for(let j = 0; j < field[0].length; j++){
                if(field[i][j] === icon) {
                    return [i,j]
                }
            }
        }
    }
    static validateField(field) {
        const pathAvailable = (startingLocation, targetLocationString, visitedTiles = new Set()) => {
            let pathFound = false;
            visitedTiles.add(startingLocation.toString());
            // Identify surrounding tiles
            const stepLeft = [startingLocation[0], startingLocation[1] - 1];
            const stepRight = [startingLocation[0],startingLocation[1] + 1];
            const stepUp = [startingLocation[0] - 1, startingLocation[1]];
            const stepDown = [startingLocation[0] + 1, startingLocation[1]];
            // Is the next tile a hat
            if (stepLeft.toString() === targetLocationString || stepRight.toString() === targetLocationString || stepUp.toString() === targetLocationString || stepDown.toString() === targetLocationString ) {
                pathFound = true;
            }
            // build an array of safe squares that the player could move too.
            if(field[stepRight[0]]?.[stepRight[1]] !== hole && field[stepRight[0]]?.[stepRight[1]] !== undefined && !visitedTiles.has(stepRight.toString()) && pathFound === false) {
                pathFound = pathAvailable(stepRight, targetLocationString, visitedTiles);
            } 
            if (field[stepDown[0]]?.[stepDown[1]] !== hole && field[stepDown[0]]?.[stepDown[1]] !== undefined && !visitedTiles.has(stepDown.toString()) && pathFound === false){
                pathFound = pathAvailable(stepDown, targetLocationString, visitedTiles);
            }
            if (field[stepLeft[0]]?.[stepLeft[1]] !== hole && field[stepLeft[0]]?.[stepLeft[1]] !== undefined && !visitedTiles.has(stepLeft.toString()) && pathFound === false) {
                pathFound = pathAvailable(stepLeft, targetLocationString, visitedTiles);            
            }
            if (field[stepUp[0]]?.[stepUp[1]] !== hole && field[stepUp[0]]?.[stepUp[1]] !== undefined && !visitedTiles.has(stepUp.toString()) && pathFound === false) {
                pathFound = pathAvailable(stepUp, targetLocationString, visitedTiles);
            } 
            
            //console.log(`safeTiles:${safeTiles.toString()} | searchedTilesTiles:${searchedTiles.toString()}`)
            if (pathFound){
                return true;
            } else {
                return false;
            }
        }
        const characterLocation = Field.#findIconLocation(field, '*');
        const hatLocation = Field.#findIconLocation(field, '^');
        const isPathAvailable = pathAvailable(characterLocation, hatLocation.toString()); 
        return isPathAvailable;
    }
    static generateField(height, width){
        let numberofCharacters = 1;
        let numberOfHats = 1;
        let numberOfHoles = Math.floor((height * width) * 0.3);
        const numberOfIcons = numberofCharacters + numberOfHats + numberOfHoles;
        // Generate base filed
        let field = [];
        for(let i = 0; i < height; i++){
            let fieldRow = []
            for(let j = 0; j < width; j++){
                fieldRow.push(fieldCharacter);
            }
            field.push(fieldRow);
        }
        // Place Non-Filed Character Icons
        for(let i = 0; i < numberOfIcons; i ++){
            const randLong = () => Math.floor(Math.random() * width);
            const randLat = () => Math.floor(Math.random() * height);
            let tryLat = randLat();
            let tryLong = randLong();
            while(field[tryLat][tryLong] !== fieldCharacter ){
                tryLat = randLat();
                tryLong = randLong();
            }
            if (numberofCharacters > 0) {
                field[tryLat][tryLong] = pathCharacter;
                numberofCharacters--;
            } else if (numberOfHats > 0) {
                field[tryLat][tryLong] = hat;
                numberOfHats--;
            } else {
                field[tryLat][tryLong] = hole;
                let pathAvailable = Field.validateField(field);
                while(pathAvailable !== true){
                    const blockedLong = tryLong;
                    const blockedLat = tryLat;
                    while(field[tryLat][tryLong] !== fieldCharacter ){
                        tryLat = randLat();
                        tryLong = randLong();
                    }
                    field[blockedLat][blockedLong] = fieldCharacter;
                    field[tryLat][tryLong] = hole;
                    pathAvailable = Field.validateField(field);
                }
            }    
        } 
        return field
    }

    print() {
        let fieldRender = ''
        const fieldRows = this.fieldShape.length;
        for (let i = 0; i < fieldRows; i++){
            const fieldColumns = this.fieldShape[i].length;
            for (let j = 0; j < fieldColumns; j++){
                fieldRender += String(this.fieldShape[i][j]);
            }
            fieldRender += '\n';
        }
        console.log(fieldRender);
    }
  
    #evaluateTile(playerLocation){
        //evaluate the character in that location
        switch(this.fieldShape[playerLocation[0]]?.[playerLocation[1]]){
            case hat:
                this.foundHat = true;
                return true;
                break;
            case hole:
            case pathCharacter:
            case undefined:
                this.playerFallen = true;
                return false;
                break;
            default:
                return true;
                break;
        }
    }
    move(playerInput) {
        const playerLocationLong = this.playerLocation[0];
        const playerLocationLat = this.playerLocation[1];
        switch(playerInput.toLowerCase()) {
            case 'w':
                this.playerLocation[0] = playerLocationLong - 1;
                break;
            case 'a':
                this.playerLocation[1] = playerLocationLat - 1;
                break;
            case 's':
                this.playerLocation[0] = playerLocationLong + 1;
                break;
            case 'd':
                this.playerLocation[1] = playerLocationLat + 1;
                break;
            default:
                break;
        }
        if(this.#evaluateTile(this.playerLocation)){
            this.fieldShape[this.playerLocation[0]][this.playerLocation[1]] = pathCharacter;
        };
    }
}

async function main(height = 3, width = 3) {
    let stillPlaying = true;
    const myFeild = new Field(height,width)
    while(stillPlaying) {
        // print current state of filed
        myFeild.print();
        // get user input on which direction they would like to go
        const userInput = await readline.question('Where would you like to move:')
        // move the player to that location
        myFeild.move(userInput);
        // did the user fall or find the hat
        if(myFeild.foundHat){
            stdout.write('Congradulations you found your hat!!!');
            stillPlaying = false;
        }
        if(myFeild.playerFallen){
            stdout.write('Oh No you have fallen and cant get back up');
            stillPlaying = false;
        }
    }
    readline.close();
}
main(process.argv[2], process.argv[3]);

// All valid credit card numbers
const valid1 = "4539677908016808"
const valid2 = [5, 5, 3, 5, 7, 6, 6, 7, 6, 8, 7, 5, 1, 4, 3, 9]
const valid3 = [3, 7, 1, 6, 1, 2, 0, 1, 9, 9, 8, 5, 2, 3, 6]
const valid4 = [6, 0, 1, 1, 1, 4, 4, 3, 4, 0, 6, 8, 2, 9, 0, 5]
const valid5 = [4, 5, 3, 9, 4, 0, 4, 9, 6, 7, 8, 6, 9, 6, 6, 6]

// All invalid credit card numbers
const invalid1 = [4, 5, 3, 2, 7, 7, 8, 7, 7, 1, 0, 9, 1, 7, 9, 5]
const invalid2 = [5, 7, 9, 5, 5, 9, 3, 3, 9, 2, 1, 3, 4, 6, 4, 3]
const invalid3 = [3, 7, 5, 7, 9, 6, 0, 8, 4, 4, 5, 9, 9, 1, 4]
const invalid4 = [6, 0, 1, 1, 1, 2, 7, 9, 6, 1, 7, 7, 7, 9, 3, 5]
const invalid5 = [5, 3, 8, 2, 0, 1, 9, 7, 7, 2, 8, 8, 3, 8, 5, 4]

// Can be either valid or invalid
const mystery1 = [3, 4, 4, 8, 0, 1, 9, 6, 8, 3, 0, 5, 4, 1, 4] //false
const mystery2 = [5, 4, 6, 6, 1, 0, 0, 8, 6, 1, 6, 2, 0, 2, 3, 9] //true
const mystery3 = [6, 0, 1, 1, 3, 7, 7, 0, 2, 0, 9, 6, 2, 6, 5, 6, 2, 0, 3] //false
const mystery4 = [4, 9, 2, 9, 8, 7, 7, 1, 6, 9, 2, 1, 7, 0, 9, 3] //false
const mystery5 = [4, 9, 1, 3, 5, 4, 0, 4, 6, 3, 0, 7, 2, 5, 2, 3] //true

// An array of all the arrays above
const batch = [valid1, valid2, valid3, valid4, valid5, invalid1, invalid2, invalid3, invalid4, invalid5, mystery1, mystery2, mystery3, mystery4, mystery5]

// An array for all of the converted invalid cards
let convertedCards = [];


// Add your functions below:
// Convert strings to an array of numbers
function stringToArray(string){

    let convertedArray = [];

    // Iterate through stirng and add converted characters to the array
    for (let i = 0; i < string.length; i++){
        
        //convert character to number
        number = Number(string[i]);

        //if not a number return that the string should only be made up of numbers
        if (isNaN(number)){
            return "String must only be numbers!";
        }
        convertedArray.push(number);
    }
    
    return convertedArray;
}

// Identify if card is valid or not
function validateCred(cardArray) {

    let cardSum = 0;

    //Iterate over card from the farthest digit to the right and iterate to the left
    for(let i = (cardArray.length - 1); i >= 0; i--){
        let cardDigit = cardArray[i];
        
        // Is the array size an even number of not
        if ((cardArray.length - 1) % 2 === 0){
            // Is the element location every other?
            if((i + 1) % 2 === 0){
                cardDigit *=2;
                if (cardDigit > 9){
                    cardDigit -=9;
                }
            }
        } else {
            // Is the elment location every other?
            if (i % 2 === 0){
                cardDigit *= 2;
                if(cardDigit > 9){
                    cardDigit -= 9;
                }
            }       
        } 
        cardSum += cardDigit;
    }
    
    if(cardSum % 10 === 0){
        return true;
    } else {
        convertedCards.push(convertInvalid(cardArray, cardSum));
        return false;
    }
}

// Make an array of the identified invalid cards.
function findInvalidCards(nestedArray) {
    
    let invalidArray = [];
    // for the number arrays within provided array
    for (let i = 0; i < nestedArray.length; i++){
        //If the element provided is a string convert
        if (typeof(nestedArray[i]) === 'string'){
            //convert it to an array
            nestedArray[i] = stringToArray(nestedArray[i]);
        }
        
        // If the element is an invalid card add it to the invalid array
        if(!validateCred(nestedArray[i])){
            invalidArray.push(nestedArray[i]);
        }
    }

    return invalidArray;
}

// Identify the companies that are provided the invalid cards
function idInvalidCardCompaines(invalidArray){

    let compaines = [];
    let compaine

    // Iterate through the number of elements in provided array
    for(let i = 0; i < invalidArray.length; i++){
        //See if the first digit of the element corresponds to one of the provided compaines
        switch(invalidArray[i][0]){
            case 3:
                compaine = "Amex (American Express)";
                break;
            case 4:
                compaine = "Visa";
                break;
            case 5:
                compaine = "Mastercard";
                break;
            case 6:
                compaine = "Discover";
                break;
            default:
                compaine = "Company not found";
                break;
        }

        //Is the identified compaine already identified
        if (compaines.includes(compaine)){

        } else {
            compaines.push(compaine);
        }
    }

    return compaines;
}

// If card is found to be invalid conver it to a valid card
function convertInvalid(cardArray, cardSum){

    //Identify how far out the card was from being divided by 10 evenly.
    const currentSumMod = cardSum % 10;
    let modDiff = 10 - currentSumMod;
    
    // While there is a differance split differance accross card digits until it will be divisable by 10
    let i = (cardArray.length - 1);
    while(modDiff > 0){
        if(cardArray[i] < 9){
            cardArray[i] += 1;
            modDiff -= 1;
        } else {
            i -= 2;
        }
    }

    return cardArray;
}

const invalidCards = findInvalidCards(batch)

const invalidCompaines = idInvalidCardCompaines(invalidCards);

console.log(invalidCompaines);
console.log(convertedCards);


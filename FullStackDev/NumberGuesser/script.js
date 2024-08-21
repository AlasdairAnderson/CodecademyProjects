let humanScore = 0;
let computerScore = 0;
let currentRoundNumber = 1;

// Write your code below:

// Generate a number between 0 and 9 to be used at the start of each round
function generateTarget() {
    return Math.floor(Math.random() * 9);
}

// Called each round to determine which guess is closets to the target number
function compareGuesses(userGuess, computerGuess, targetNumber) {
    // find differance in guesses compared to target
    const userDifferance = getAbsoluteDistance(userGuess, targetNumber);
    const computerDifferance = getAbsoluteDistance(computerGuess, targetNumber);

    // Is user guess closer to or eqaul to computer guess
    if (userDifferance <= computerDifferance){
        return true;
    } else {
        return false;
    }    
}


// Increase the winner's score after each round
function updateScore(winner) {
    if(winner === 'human'){
        humanScore += 1; 
    } else if (winner === 'computer'){
        computerScore += 1;
    }
}

// Update the round number after each round
function advanceRound() {
    currentRoundNumber += 1;
}

function getAbsoluteDistance(guess, targetNumber){
    return Math.abs(guess - targetNumber);
  }

  function correctInput(userGuess){
  if(userGuess < 0){
    return true;
  }
}
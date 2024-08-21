# Codecademy FullStackDev: Challenge Project - Number Guesser
## Project Goal
In this project, I will create a JavaScript functions to power a small guessing game. All of the code that I write will be containded within the script.js file. All other code is provided by Codecademy for this challenge.

## Project Tasks
1. Create a <code>generateTarger()</code> function. This function should return a random integer between 0 and 9.
The purpose of this function is to be called at the start of each new round in order to generate the new secret traget number

2. Create a <code>compareGuesses()</code> function. This function:
- Has three parameters representing the user (human) guess, a computer guess, and a secret target number to be guessed.
- Determines which player (human or computer) wins based on which guess is closets to the target. If both players are tied, the human user should win.
- Return <code>true</code> if the human player wins, and <code>false</code> if the computer player wins.
The purpose of this function is to be called each reound to determin which guess is closest to the target number

3. Create an <code>updateScore()</code> function. This Function:
- Has a single parameter. This parameter will be a string value representing the winner.
- Increases the score variable (<code>humanScore</code> or <code>computerScore</code>) by 1 depending on the winner passed in to <code>updateScore</code>. The string passed in will be either <code>'human'</code> or <code>'computer'</code>.
- Dose not need to return any value
The purpose of this function is to be used to correctly increase the winner's score after each round.

4. Create an <code>advanceRound()</code> function. This function should increase the value of <code>currentRoundNumber</code> by 1.
The purpose of this function is to be used to update the round number after each round.

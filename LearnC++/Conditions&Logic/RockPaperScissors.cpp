/*This program is let the player choose one of the 5 option
the computer will then choose one of thoes 5 options at random
it will then evaluate which option wins and return the outcome*/

#include <iostream>
#include <stdlib.h>


int main(){

  srand (time(NULL));
  int computer = rand() % 5 + 1;

  int user = 0; 
  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";
  
  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";
  std::cout << "4) Lizard\n";
  std::cout << "5) Spock\n";
 
  std::cout << "shoot! \n";
  std::cin >> user;

    if (user == 1){
    std::cout << "you choose: Rock\n";
    }else if (user == 2){
    std::cout << "you choose: Paper\n";
    }else if (user == 3){
    std::cout << "you choose: Scissors\n";
    }else if (user == 4){
      std::cout << "you choose: Lizard\n";
    }else{
      std::cout << "you choose: Spock\n";
    }

  if (computer == 1){
    std::cout << "computer choose: Rock\n";
    }else if (computer == 2){
    std::cout << "computer choose: Paper\n";
    }else if (computer == 3){
    std::cout << "computer choose: Scissors\n";
    }else if (computer == 4){
      std::cout << "computer choose: Lizard\n";
    }else{
      std::cout << "computer choose: Spock\n";
    }

  //who wins 
  if(user == computer){
    std::cout << "Sorry you and the computer guessed the same\n";
  }else if(user == 1 && computer == 3 || user == 1 && computer == 4 || user == 2 && computer == 1 || user == 2 && computer == 5 || user == 3 && computer == 2 || user == 3 && computer == 4 || user == 4 && computer == 2 || user == 4 && computer == 5 || user == 5 && computer == 1 || user == 5 && computer == 3){
    std::cout << "Congradulations you beat the computer.\n";
  }else {
    std::cout << "Sorry the computer beet you.\n";
  }


  
  return 0;
}

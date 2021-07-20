#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){

  //Genarate new random number each time
  srand(time(NULL));

  std::cout << "MAGIC 8-BALL:\n";

  //Ask for user question
 /* std::string UserQ;
  std::cout << "What would you like to ask the 8 ball?\n";
  std::cin >> UserQ;*/

  //Genarate random number
  int answer = std::rand() % 20;
  //Answere to user question
  if(answer == 0){
    std::cout << "It is certain.\n";
  }else if (answer == 1){
    std::cout << "It is decidedly so.\n";
  }else if (answer == 2){
    std::cout << "Without a doubt.\n";
  }else if (answer == 3){
    std::cout << "Yes - Definitely.\n";
  }else if (answer == 4){
    std::cout << "As I see it, yes.\n";
  }else if (answer == 5){
    std::cout << "Most likely.\n";
  }else if (answer == 6){
    std::cout << "Outlook good.\n";
  }else if (answer == 7){
    std::cout << "Yes.\n";
  }else if (answer == 8){
    std::cout << "Signs point to yes.\n";
  }else if (answer == 9){
    std::cout << "Reply hazy, try again.\n";
  }else if (answer == 10){
    std::cout << "Ask agin later.\n";
  }else if (answer == 11){
    std::cout << "Better not tell you now.\n";
  }else if (answer == 12){
    std::cout << "Cannot predict now.\n";
  }else if (answer == 13){
    std::cout << "Concertrate and ask again.\n";
  }else if (answer == 14){
    std::cout << "Don't count on it.\n";
  }else if (answer == 15){
    std::cout << "My reply is no.\n";
  }else if (answer == 16){
    std::cout << "My sources say no.\n";
  }else if (answer == 17){
    std::cout << "Outlook not so good.\n";
  }else if (answer == 18){
    std::cout << "Very doubtful.\n";
  }else if (answer == 19){
    std::cout << "Not a chance.\n";
  }else{
    std::cout << "Sorry no.\n";
  }

  return 0;
}

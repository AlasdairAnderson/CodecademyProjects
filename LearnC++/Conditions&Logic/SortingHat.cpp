#include <iostream>

int main(){

  //Scorse for each house
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  //Store answers
  int answer1;
  int answer2;
  int answer3;
  int answer4;

  std::cout << "\n\nWelcome mugle to the sorting hat quiz!\nPlease answer the questions to see\nWhat house your are sorted into!\n\n";

  //Question 1
  std::cout << "Q1) When I'm dead, I want people to remeber me as?\n";
  std::cout << "1) The Good\n";
  std::cout << "2) The Great\n";
  std::cout << "3) The Wise\n";
  std::cout << "4) The Bold\n\n";
  std::cout << "What is your answer?\n";
  std::cin >> answer1;

  if(answer1 == 1){
    ++hufflepuff;
  }else if(answer1 == 2){
    ++slytherin;
  }else if(answer1 == 3){
    ++ravenclaw;
  }else if(answer1 == 4){
    ++gryffindor;
  }else{
    std::cout << "Invalid Input!\n";
  }

  //Question 2
  std::cout << "\n\nQ2) Dawn or Dusk?\n";
  std::cout << "1) Dawn\n";
  std::cout << "2) Dusk\n\n";
  std::cout << "What is your answer?\n";
  std::cin >> answer2;

  if(answer2 == 1){
    ++gryffindor;
    ++ravenclaw;
  }else if(answer2 == 2){
    ++hufflepuff;
    ++slytherin;
  }else{
    std::cout << "Invalid input!\n";
  }

  //Question 3
  std::cout << "\n\nQ3) Which kind of instrument most pleases your ear?\n";
  std::cout << "1) The violin\n";
  std::cout << "2) The trumpet\n";
  std::cout << "3) The piano\n";
  std::cout << "4) The drums\n\n";
  std::cout << "What is your answer?\n";
  std::cin >> answer3;

  if(answer3 == 1){
    ++slytherin;
  }else if(answer3 == 2){
    ++hufflepuff;
  }else if(answer3 == 3){
    ++ravenclaw;
  }else if(answer3 == 4){
    ++gryffindor;
  }else{
    std::cout << "Invalid input!\n";
  }

  //Question 4
  std::cout << "\n\nQ4) Which road tempts you the most?\n";
  std::cout << "1) The wide, sunny grassy lane\n";
  std::cout << "2) The narrow, dark, lantern-lit alley\n";
  std::cout << "3) The twisting, leaf-strewn path through woods\n";
  std::cout << "4) The cobbled streed lined with ancident buildings\n\n";
  std::cout << "What is your answer?\n";
  std::cin >> answer4;

  if(answer4 == 1){
    ++hufflepuff;
  }else if(answer4 == 2){
    ++slytherin;
  }else if(answer4 == 3){
    ++gryffindor;
  }else if(answer4 == 4){
    ++ravenclaw;
  }else{
    std::cout << "Invalid input!\n";
  }

  //Sortedhouse

  int max = 0;
  std::string house;

  if(gryffindor > max) {
    max = gryffindor;
    house = "Gryffindor";
  }

  if(hufflepuff > max){
    max = hufflepuff;
    house = "Hufflepuff";
  }

  if(ravenclaw > max) {
    max = ravenclaw;
    house = "Ravenclaw";
  }

  if(slytherin > max){
    max = slytherin;
    house = "Slytherin";
  }

  std::cout << house << "!\n";

  //debugline
 /* std::cout << "Gryffindor: " << gryffindor << std::endl;
  std::cout << "Syltherin: " << slytherin << std::endl;
  std::cout << "Hufflepuff: " << hufflepuff << std::endl;
  std::cout << "Ravenclaw: " << ravenclaw << std::endl;
  */

return 0;
}

#include <iostream>

int main() {
  
  //Set dog name and age.
  std::string DogName;
  int DogAge;

  //get dog name and age.
  std::cout << "What is your dogs name: \n";
  std::cin >> DogName;
  std::cout << "What is your dogs age: \n";
  std::cin >> DogAge;
  
  //Is the dog a puppy or not
  if(DogAge <= 2){
    //Cacluate puppys age in humanyears
    double HumanYears = DogAge*10.5;
    //Print Dog age in human years
    std::cout << DogName << "'s age in human years is " << HumanYears << " old.\n";
  }else{
    //Caculate dogs age in human years
    double HumanYears = ((DogAge-2)*4)+21;
    //Print Dog age in human years
    std::cout << DogName << "'s age in human years is " << HumanYears << " old.\n";
  }
  
  return 0;  
}

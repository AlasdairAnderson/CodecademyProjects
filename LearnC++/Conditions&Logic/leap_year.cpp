#include <iostream>

int main() {
  
  int Year;
  

  std::cout << "Please input a year to see if it is a leap year:\n";
  std::cin >> Year;

  std::string Len = std::to_string(Year);
  
  if(Len.length() != 4){
    std::cout << "The year has to be four-digit number" << std::endl;
  }else if (Year % 400 == 0){
    std::cout << "This is a leap year" << std::endl;
  }else if (Year % 100 == 0 && Year % 400 != 0){
    std::cout << "This is not a leap year" << std::endl;
  }else if (Year % 4 == 0) {
    std::cout << "This is a leap year" << std::endl;
  }else{
    std::cout << "This is not a leap year" << std::endl;
  }
  return 0;
}

#include <iostream>
#include <cmath>

int main() {
  
  double height, weight, bmi;
  
  // Ask user for their height
  
  std::cout << "Type in your height (m): \n";
  std::cin >> height;
  
  // Now ask the user for their weight
  std::cout << "Type in your weight (kg): \n";
  std::cin >> weight;
  
  //calculate BMI
  bmi = weight / pow(height, 2);
  //Show BMI
  std::cout << "Your BMI is: " << bmi << ".";
  
  return 0;

}

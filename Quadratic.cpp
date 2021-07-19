#include <iostream>
#include <cmath>

int main() {
  
  float  a;
  float  b;
  float  c;

  //get value a b c from user
  std::cout << "Enter a: ";
  std::cin >> a;
  std::cout << "\nEnter b: ";
  std::cin >> b;
  std::cout << "\nEnter c: ";
  std::cin >> c;
  
  //Declare two variable for root
  float root1 = (-b + std::sqrt(b*b - (4*a*c)))/(2*a);
  float root2 = (-b - std::sqrt(b*b - (4*a*c))) / (2*a);

  //print value of root1 and root2
  std::cout << "Root 1 is " << root1 << "\nRoot 2 is " << root2 << "\n";
  
  return 0;
}

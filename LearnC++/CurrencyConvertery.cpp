#include <iostream>

int main() {
  
  //Variables for each currency
  float pesos, reais, soles, dollars;

  //Ask user for amount of currency
  std::cout << "Enter number of Colobian Pesos: ";
  std::cin >> pesos;
  std::cout << "\nEnter number of Brazilian Reais: ";
  std::cin >> reais;
  std::cout << "\nEnter number of Peruvian Soles: ";
  std::cin >> soles;

// pesos to usd is 0.050
// reais to usd is 0.19
// soles to usd is 0.26
dollars = (pesos * 0.050) + (reais * 0.19) + (soles * 0.26);

std::cout << "\nUS Dollars = $" << dollars << std::endl;

  return 0;
  
}

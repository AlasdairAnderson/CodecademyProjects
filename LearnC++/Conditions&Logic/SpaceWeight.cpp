#include <iostream>

int main() {

  //what is his earth weight
  float EarthWeight;
  std::cout << "What is your weight on earth (Kg): ";
  std::cin >> EarthWeight;

  //What Planet would he like to fight on
  int ChosenPlanet;

  std::cout << "What Plannet would you like to fight on?\n1. Mercury\n2. Venus\n3. Mars\n4. Jupiter\n5. Saturn\n6. Uranus\n7. Neptune\n";
  std::cin >> ChosenPlanet;

  //Evaluate Weight on ChosenPlanet
  switch(ChosenPlanet){
    case 1:
      std::cout << "Your weight on Mercury will be: " << EarthWeight*0.38 << "kg\n";
      break;
    case 2:
      std::cout << "Your weight on Venus will be: " << EarthWeight*0.91 << "kg\n";
      break;
    case 3:
      std::cout << "Your weight on Mars will be: " << EarthWeight*0.38 << "kg\n";
      break;
    case 4:
      std::cout << "Your weight on Jupiter will be: " << EarthWeight*2.34 << "kg\n";
      break;
    case 5:
      std::cout << "Your weight on Saturn will be: " << EarthWeight*1.06 << "kg\n";
      break;
    case 6:
      std::cout << "Your weight on Uranus will be: " << EarthWeight*0.92 << "kg\n";
      break;
    case 7:
      std::cout << "Your weight on Neptune will be: " << EarthWeight*1.19 << "kg\n";
      break;
    default :
      std::cout << "error\n";
      break;
  }
 return 0;
}

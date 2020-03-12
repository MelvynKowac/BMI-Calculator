#include <iostream>
using namespace std;

int main() {
  
  double height, weight, bmi;
  
  std::cout << "NEW CALCULATION\n";
  // Ask user for their height
  
  std::cout << "Type in your height (m): ";
  std::cin >> height;
  
  // Now ask the user for their weight and calculate BMI
  
  std::cout << "Type in your weight (kg): ";
  std::cin >> weight;
  
  bmi = weight / (height * height);
  
  std::cout << "Your Body Mass Index is: " << bmi;
  
  std::cout << "\n\n\n" ;
  
  
return main();

}

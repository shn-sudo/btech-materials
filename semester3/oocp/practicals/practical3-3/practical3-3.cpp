// Write a program to find out the square root of a number using inbuilt library
// functions

#include <cmath>
#include <iostream>

int main() {

  std::cout << "The goal of the program is to find the square root of a number "

               "using the library sqrt() function"

            << std::endl;

  std::cout << "Please enter the number you want to find the square root of: ";

  float userInput;

  std::cin >> userInput;

  float squareRoot;

  squareRoot = sqrtf(userInput);

  std::cout << squareRoot;

  return 0;
}

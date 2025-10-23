// Write a program to find an area of circle using function with no argument and
// no return value.

#include <iostream>
using namespace std;
const double PI_HIGH = 3.14159265358979323846;
void areaCircle() {
  cout << "This goal of the program is to find the area of the circle based on "
          "the radius entered by the user"
       << endl;
  cout << "Please enter the radius" << endl;
  int userInputsRadius;
  cin >> userInputsRadius;
  float areaOfCircle;
  areaOfCircle = PI_HIGH * (userInputsRadius * userInputsRadius);
  cout << "The area of the circle based on the radius you entered is: "
       << areaOfCircle << endl;
}
int main() {
  areaCircle();
  return 0;
}

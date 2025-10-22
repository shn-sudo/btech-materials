// Program to find factorial of a given number
#include <iostream>
using namespace std;

int main() {
  cout << "The goal of this program is to find factorial of a given number (0 "
          "or above)"
       << endl;
  cout << endl;
  int userInput;
  cout << "Please enter the number: ";
  cin >> userInput;
  cout << endl;
  if (userInput < 0) {
    cout << "Please make sure the number you enter is 0 or higher";
    main();
  } else if (userInput == 0) {
    cout << "The factorial of 0 is: 1" << endl;
  } else {
    int fofNumber = 1;
    for (int i = 1; i <= userInput; i++) {
      fofNumber *= i;
    }
    cout << "The factorial of " << userInput << " is: " << fofNumber << endl;
  }
  return 0;
}

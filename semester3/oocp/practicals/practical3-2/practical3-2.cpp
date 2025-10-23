// Write a program in C++ to generate Fibonacci Series by using recursion.
#include <iostream>
using namespace std;
void printFibonacciSeries(int n) {
  int a = 0, b = 1, i = 3, c;
  if (n == 0) {
    cout << "Your input should be higher than 0" << endl;
    return;
  } 
  else if (n == 1) {
    cout << a;
  } else if (n == 2) {
    cout << a << "\t" << b << "\t";
  } else {
    cout << a << "\t" << b << "\t";
    while (i <= n) {
      c = a + b;
      cout << c << "\t";
      a = b;
      b = c;
      i++;
    }
  }
}
int main() {
  int userInput;
  cout << "Please enter the n i.e the term upto which you want to "
          "printFibonacciSeries"
       << endl;
  cin >> userInput;
  printFibonacciSeries(userInput);
}

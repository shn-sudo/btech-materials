#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

const double PI_HIGH = 3.14159265358979323846;

void areaCircle() {
    cout << "The goal of the program is to find the area of the circle based on "
            "the radius entered by the user"
         << endl;
    
    double userInputsRadius;
    
    while (true) {
        cout << "Please enter the radius (must be a positive number): ";
        
        // Input validation
        if (!(cin >> userInputsRadius)) {
            cout << "Invalid input. Please enter a valid number." << endl;
            
            // Clear error flags
            cin.clear();
            
            // Discard invalid input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        
        // Check for non-positive radius
        if (userInputsRadius <= 0) {
            cout << "Error: Radius must be a positive number." << endl;
            continue;
        }
        
        break;
    }
    
    // Calculate area using double for precision
    double areaOfCircle = PI_HIGH * pow(userInputsRadius, 2);
    
    cout << "The area of the circle based on the radius you entered is: " 
         << areaOfCircle << endl;
}

int main() {
    areaCircle();
    return 0;
}

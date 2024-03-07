#include <iostream>
using namespace std;

int main() {
    
    cout << "Enter any value to calculate its Factorial: ";
    int number;
    cin >> number;

    // Ensure non-negative input
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers.\n";
    } else {
        // Calculate factorial using while loop
        int factorial = 1;
        int i = 1;
        while (i <= number) {
            factorial *= i;
            i++;
        }

        // Display the result
        cout << "Factorial of " << number << " is: " << factorial << "\n";
    }

    return 0;
}
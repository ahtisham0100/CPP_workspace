#include <iostream>
using namespace std;

int main() {
    int number;
    long long factorial = 1; // Use long long to handle larger factorials

    // Get input from the user
    cout << "Enter any value to calculate its Factorial: ";
    cin >> number;

    // Calculate factorial using do/while statement
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." <<endl;
    } else {
        int i = 1;
        do {
            factorial *= i;
            i++;
        } while (i <= number);

        // Display the result
        cout << "Factorial of " << number << " is: " << factorial << endl;
    }

    return 0;
}
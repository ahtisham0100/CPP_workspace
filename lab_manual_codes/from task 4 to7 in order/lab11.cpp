#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char operation;

    // Get input from the user
    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    cout << "Enter the operation (+, -, *, /, %): ";
    cin >> operation;

    // Perform the arithmetic operation using if/else statements
    int result;
    if (operation == '+') {
        result = num1 + num2;
    } else if (operation == '-') {
        result = num1 - num2;
    } else if (operation == '*') {
        result = num1 * num2;
    } else if (operation == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            cout << "Error: Division by zero is undefined." << endl;
            return 1; // Exit with an error code
        }
    } else if (operation == '%') {
        if (num2 != 0) {
            result = num1 % num2;
        } else {
            cout << "Modulo by zero is undefined." <<endl;
             
        }
    } else {
        cout << "Invalid operation entered." << endl;
    }

    // Display the result
    cout << "Result: " << result <<endl;

    return 0;
}
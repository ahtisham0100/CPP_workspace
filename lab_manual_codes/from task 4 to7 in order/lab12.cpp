#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char operation;

    // Get input from the user
    cout<<"Enter the expression to be evaluated: "<<endl;
    cout<<endl;
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    cout << "Enter the operation (+, -, *, /, %): ";
    cin >> operation;

    int result;
    switch (operation) {
        case '+': result = num1 + num2;
        break;
        case '-': result = num1 - num2;
        break;
        case '*': result = num1 * num2; 
        break;
        case '/': 
            if (num2 != 0) result = num1 / num2;
            else { cout << "Error: Division by zero is undefined." << endl;  }
            break;
        case '%':
            if (num2 != 0) result = num1 % num2;
            else { cout << "Error: Modulo by zero is undefined." << endl;  }
            break;
        default: cout << "Invalid operation entered." << endl; ;
    }

    // Display the result
    cout << "Result: " << result << endl;

    return 0;
}
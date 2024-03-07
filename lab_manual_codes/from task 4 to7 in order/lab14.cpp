#include <iostream>
using namespace std;

int main() {
    int number;

    // Get input from the user
    cout << "Enter a number: ";
    cin >> number;

    // Display odd numbers less than or equal to the input number
    std::cout << "\tOdd numbers less than or equal to " << number << " are: ";
    for (int i = 1; i <= number; i += 2) {
        cout << i;
        if (i < number - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    // Display even numbers less than or equal to the input number
    std::cout << "\tEven numbers less than or equal to " << number << " are: ";
    for (int i = 2; i <= number; i += 2) {
        cout << i;
        if (i < number - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    // Calculate and display the sum of odd and even numbers
    int sumOdd = 0, sumEven = 0;
    for (int i = 1; i <= number; i++) {
        if (i % 2 == 0) {
            sumEven += i;
        } else {
            sumOdd += i;
        }
    }

    cout << "\tSum of odd numbers: " << sumOdd << endl;
    cout << "\tSum of even numbers: " << sumEven << endl;

    return 0;

    }

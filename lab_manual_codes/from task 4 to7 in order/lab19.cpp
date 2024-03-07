#include <iostream>
using namespace std;

int main() {
    int number;
    
    // Get input from the user
    cout << "Enter a number: ";
    cin >> number;

    // Initialize variables to store the sum of odd and even numbers
    int sumOdd = 0, sumEven = 0;

    // Display odd numbers
    cout << "Odd numbers less than or equal to " << number << " are :";
    int i = 1;
    while (i <= number) {
        if (i % 2 != 0) {
            cout << " " << i;
            sumOdd += i;
        }
        i++;
    }
    cout << "\n";

    // Display even numbers
    cout << "Even numbers less than or equal to " << number << " are:";
    i = 2;
    while (i <= number) {
        cout << " " << i;
        sumEven += i;
        i += 2;
    }
    cout << "\n";

    
    cout << "\nSum of odd numbers: " << sumOdd << "\n";
    cout << "Sum of even numbers: " << sumEven << "\n";

    return 0;
}
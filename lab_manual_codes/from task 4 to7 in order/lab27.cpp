#include <iostream>
using namespace std;

int main() {
    
    cout << "Enter the first number: ";
    int num1;
    cin >> num1;

    // Prompt the user to enter the second number
    cout << "Enter the second number: ";
    int num2;
    cin >> num2;

    // Find the GCD using a for loop
    int gcd = 1;
    for (int i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    // Display the result
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << "\n";

    return 0;
}
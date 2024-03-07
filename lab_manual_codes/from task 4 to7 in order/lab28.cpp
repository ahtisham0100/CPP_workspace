#include <iostream>
using namespace std;

int main() {
    
    cout << "Enter the first number: ";
    int num1;
    cin >> num1;

    cout << "Enter the second number: ";
    int num2;
    cin >> num2;

    // Find the GCD using a do-while loop
    int gcd = 1;
    int i = 1;

    do {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
        i++;
    } while (i <= num1 && i <= num2);

    // Display the result
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << "\n";

    return 0;
}
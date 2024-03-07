#include <iostream>
using namespace std;


int main() {
    int num1, num2;

    // input from the user
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Ensure both numbers are positive
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;

    // Calculate GCD 
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    // Display the result
    std::cout << "GCD of " << num1 << " and " << num2 << " is: " << num1 << std::endl;

    return 0;
}
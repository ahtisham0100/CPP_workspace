#include <iostream>
using namespace std;

int main() {
     

    int number;

    
    cout << "Enter a number: ";
    cin >> number;

    
    int sumOdd = 0, sumEven = 0;

    // Display odd numbers using do-while loop
    cout << "\tOdd numbers less than or equal to " << number << " are :";
    int oddCounter = 1;
    do {
        cout << " " << oddCounter;
        sumOdd += oddCounter;
        oddCounter += 2;
    } while (oddCounter <= number);
    cout << "\n";

    // Display even numbers using do-while loop
    cout << "Even numbers less than or equal to " << number << " are:";
    int evenCounter = 2;
    do {
        cout << " " << evenCounter;
        sumEven += evenCounter;
        evenCounter += 2;
    } while (evenCounter <= number);
    cout << "\n";

    // Display sum of odd and even numbers
    cout << "\nSum of odd numbers: " << sumOdd << "\n";
    cout << "Sum of even numbers: " << sumEven << "\n";

    return 0;
}
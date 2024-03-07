#include <iostream>
using namespace std;

// Function to find the largest among four numbers
int findLargest(int a, int b, int c, int d) {
    int largest = a;

    if (b > largest) {
        largest = b;
    }

    if (c > largest) {
        largest = c;
    }

    if (d > largest) {
        largest = d;
    }

    return largest;
}

int main() {
    int num1, num2, num3, num4;

    // Input four integers from the user
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    cout << "Enter the third integer: ";
    cin >> num3;
    cout << "Enter the fourth integer: ";
    cin >> num4;

    // Find and display the largest number using the function
    int largest = findLargest(num1, num2, num3, num4);

    cout << "The largest number among " << num1 << ", " << num2 << ", " << num3 << ", and " << num4 << " is: " << largest << endl;

    return 0;
}

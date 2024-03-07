#include <iostream>
using namespace std;

int main() {
    
    cout << "Enter any value: ";
    int num;
    cin >> num;

    // Calculate the sum of integers using a while loop
    int sum = 0;
    int i = 1;
    while (i <= num) {
        sum += i;
        i++;
    }

    // Display the result
    cout << "Sum of integers from 1 to " << num << " is: " << sum << "\n";

    return 0;
}
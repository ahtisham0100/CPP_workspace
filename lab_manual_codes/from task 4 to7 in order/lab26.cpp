#include <iostream>
using namespace std;


int main() {
    
    cout << "Enter any value: ";
    int num;
    cin >> num;

    // Calculate the sum of integers using a do-while loop
    int sum = 0;
    int i = 1;

    do {
        sum += i;
        i++;
    } while (i <= num);

    // Display the result
    cout << "Sum of integers from 1 to " << num << " is: " << sum << "\n";

    return 0;
}
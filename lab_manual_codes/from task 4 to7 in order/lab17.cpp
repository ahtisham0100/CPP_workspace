#include <iostream>
using namespace std;

int main() {
    int num;

    //input from the user
    std::cout << "Enter any value: ";
    std::cin >> num;

    //Calculate the sum using a for loop
    int sum = 0;
    for (int i = 1; i <= num; ++i) {
        sum += i;
    }

    // Display the result
    cout << "Sum of integers from 1 to " << num << " is: " << sum << endl;

    return 0;
}
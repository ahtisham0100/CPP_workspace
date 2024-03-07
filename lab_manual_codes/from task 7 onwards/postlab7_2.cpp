#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int count = 0;  // Initialize count to zero
    int num = 2;    // Start from the first prime number

    while (count < 100) {  // Continue until 100 prime numbers are found
        int counter = 0;

        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                counter++;
                break;  // Break out of the loop if a divisor is found
            }
        }

        if (counter == 0) {  // If no divisor is found, it's a prime number
            cout << num << " ";
            count++;
        }

        num++;
    }

    return 0;
}

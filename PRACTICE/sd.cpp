#include <iostream>
using namespace std;

int main() {
    int count = 0;  // Count the number of primes found
    int num = 2;    // Starting with the first prime number

    while (count < 100) {  // Continue until 100 primes are found
/*        bool isPrime = true;  // Assume the number is prime initially

        // Check for factors from 2 to the square root of the number
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {  // If number is divisible by i, it's not prime
                isPrime = false;
                break;
            }
        }
*/
        // If the number is prime, print it
        if (isPrime) {
            cout << num << " ";
            ++count;  // Increment the count of primes found
        }

        ++num;  // Move to the next number for checking
    }

    cout << endl;  // Print a new line after all primes are printed
    return 0;
}

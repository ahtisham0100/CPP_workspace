#include<iostream>
using namespace std;

// Function to check if a number is a perfect number
int IsPerfect(int num) {
    int sum = 1;  // Start with 1 as every number is divisible by 1

    // Loop to find divisors and calculate sum
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }

    // Check if the sum of divisors is equal to the number
    return (sum == num);
}

int main() {
    int N;

    // Input the value for N
    cout << "Enter a value for N: ";
    cin >> N;

    // Print perfect numbers between 1 and N
    cout << "Perfect numbers between 1 and " << N << " are:" << endl;

    for (int i = 1; i <= N; ++i) {
        if (IsPerfect(i)) {
            cout << i << " - Divisors are 1";
            for (int j = 2; j < i; ++j) {
                if (i % j == 0) {
                    cout << "," << j;
                }
            }
            cout << endl;
        }
    }

    return 0;
}

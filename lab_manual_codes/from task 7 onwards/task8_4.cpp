#include <iostream>
using namespace std;

// Function to calculate the sum of the series F(N)
int calculateSum(int num) {
    int sum = 0;

    for (int i = 1; i <= num; ++i) {
        for (int j = 1; j <= i; ++j) {
            sum += j;
        }
    }

    return sum;
}

int main() {
    int N;

    // Input the value of N from the user
    cout << "Enter the value of N: ";
    cin >> N;

    // Calculate and display the result of F(N) using the function
    int result = calculateSum(N);

    cout << "F(" << N << ") = ";

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j;
            if (j < i) {
                cout << "+";
            }
        }
        if (i < N) {
            cout << " + ";
        }
    }

    cout << " = " << result << endl;

    return 0;
}

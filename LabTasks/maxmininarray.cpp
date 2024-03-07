#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int num[n];

    // Input
    for (int i = 0; i < n; i++) {
        cout << "Value of num[" << i << "] = ";
        cin >> num[i];
    }

    // Printing the array
    cout << "The array is: ";
    for (int k = 0; k < n; k++) {
        cout << num[k] << "   ";
    }
    cout << endl;

    // Finding maximum and sum
    int max = num[0];
    int min = num[0];
    int sum = num[0];

    for (int i = 1; i < n; i++) {
        if (num[i] > max) {
            max = num[i];
        }
        if (num[i] < min) {
            min = num[i];
        }
        sum += num[i];
    }

    cout << "Maximum value in array: " << max << endl;
    cout << "Minimum value in array: " << min << endl;
    cout << "Sum of all elements: " << sum << endl;
    cout<<"average is : " << sum/n ;

    return 0;
}

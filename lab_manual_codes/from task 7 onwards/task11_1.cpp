#include<iostream>
using namespace std;

int main() {
    // Integer array of 10 indexes
    int intArray[10];
    int intArraySize = sizeof(intArray);
    cout << "Size of integer array of 10 indexes is: " << intArraySize << " Bytes" << endl;

    // Float array of 15 indexes
    float floatArray[15];
    int floatArraySize = sizeof(floatArray);
    cout << "Size of float array of 15 indexes is: " << floatArraySize << " Bytes" << endl;

    // Double array of 20 indexes
    double doubleArray[20];
    int doubleArraySize = sizeof(doubleArray);
    cout << "Size of double array of 20 indexes is: " << doubleArraySize << " Bytes" << endl;

    // Character array of 25 indexes
    char charArray[25];
    int charArraySize = sizeof(charArray);
    cout << "Size of character array of 25 indexes is: " << charArraySize << " Bytes" << endl;

    return 0;
}

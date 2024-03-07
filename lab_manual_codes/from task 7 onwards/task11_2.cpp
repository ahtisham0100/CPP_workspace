#include<iostream>
using namespace std;

int main() {
    // Integer array of size 6, initialized with 12
    int intArray[6] = {12, 12, 12, 12, 12, 12};
    cout << "Integer array :";
    for (int i = 0; i < 6; ++i) {
        cout << " " << intArray[i];
    }
    cout << endl;

    // Float array of size 5, initialized with 0.5
    float floatArray[5] = {0.5, 0.5, 0.5, 0.5, 0.5};
    cout << "\tFloat array :";
    for (int i = 0; i < 5; ++i) {
        cout << " " << floatArray[i];
    }
    cout << endl;

    // Character array of size 4, initialized with 'a'
    char charArray[4] = {'a', 'a', 'a', 'a'};
    cout << "Character array :";
    for (int i = 0; i < 4; ++i) {
        cout << " " << charArray[i];
    }
    cout << endl;

    return 0;
}

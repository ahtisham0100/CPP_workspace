#include <iostream>
using namespace std;

int main() {
    char input;

    
    cout << "Enter a character: ";
    cin >> input;

    
    if (input >= '0' && input <= '9') {
        cout << "It is a digit." <<endl;

        
        int digitValue = input - '0';
        if (digitValue % 2 == 0) {
            cout << "It is an even digit."<<endl;
        } else {
            cout << "It is an odd digit."<<endl;
        }
    }
    
    else if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')) {
        cout << "It is an alphabet."<<endl;

        
        if (input >= 'A' && input <= 'Z') {
            cout << "It is an uppercase alphabet."<<endl;
        } else {
            cout << "It is a lowercase alphabet."<<endl;
        }
    }
    
    else {
        cout << "It is a special symbol." <<endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    

    
    cout << "Enter any float value: ";
    float floatValue;
    cin >> floatValue;

    // Print the float value and decrease it by 0.5 in each iteration
     
    for (; floatValue >= 0; floatValue -= 0.5) {
        cout << floatValue << " ";
        cout<<endl;
    }

    

    return 0;
}
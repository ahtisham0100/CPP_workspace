#include <iostream>
using namespace std;

int main() {
    

    
    cout << "Enter any float value: ";
    float floatValue;
    cin >> floatValue;

    // Print the float value and decrease it by 0.5 in each iteration using do-while loop
    do {
        cout << floatValue << " ";
        floatValue -= 0.5;
        cout<<endl;
    } while (floatValue >= 0);

    

    return 0;
}
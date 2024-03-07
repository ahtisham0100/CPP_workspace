#include <iostream>
using namespace std;

int main() {
    cout << "\t \t \t \t \t  WELCOME TO FACTORIAL CALCULATOR " << endl << endl << endl;

    int num;
    int factorial = 1;

    cout << "ENTER THE NUMBER TO CALCULATE FACTORIAL: ";
    cin >> num;

    do {
        factorial = num * factorial;
        --num;
    } while (num > 1);

    cout << "Factorial: " << factorial << endl;

    system("pause");
    return 0;
}

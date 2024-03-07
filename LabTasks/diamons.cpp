#include <iostream>
using namespace std;
int main() {
    
    int n ; //  the size of the diamond
    cout<<"ENTER AN ODD NUMBER : " ;
    cin>>n;
    if(n%2 != 0)
    {
// Upper Triangle
    
    {
       int   i = 1;
    do {
        int spaces = n - i;
        do {
            std::cout << "  ";
            spaces--;
        } while (spaces >= 0);

        int stars = 1;
        do {
            std::cout << "* ";
            stars++;
        } while (stars <= i * 2 - 1);

        std::cout << std::endl;
        i++;
    } while (i <= n);

    // Lower Triangle
    i = n - 1;
    do {
        int spaces = n - i;
        do {
            std::cout << "  ";
            spaces--;
        } while (spaces >= 0);

        int stars = 1;
        do {
            std::cout << "* ";
            stars++;
        } while (stars <= i * 2 - 1);

        std::cout << std::endl;
        i--;
    } while (i >= 1);
    } 
    

while (n%2 == 0 );
  
    }
    else {
        cout<<"INVALID NUMBER.PLEASE RESTART PROGRAM AGAIN AND ENTER AN ODD NUMBER ." << endl;
    }
    system("pause");
    return 0;
}

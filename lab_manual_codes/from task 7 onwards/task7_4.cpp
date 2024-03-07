#include<iostream>
using namespace std;
void oddnum(int* ) ;
int main() {
int rows;
cout<<"enter the odd numbe to print diamond pattern : "  ;
cin>>rows;
oddnum(&rows) ; //check and appends even number 

    int spaces = rows / 2;
    int stars = 1;

    do {
        // Print spaces
        for (int i = 0; i < spaces; i++) {
            cout << " ";
        }

        // Print stars
        for (int i = 0; i < stars; i++) {
            cout << "*";
        }

        // Move to the next line
        cout << endl;

        // Adjust spaces and stars for the next iteration
        spaces--;
        stars += 2;

    } while (spaces >= 0);

    // Reset spaces and stars for the bottom half of the diamond
    spaces = 1;
    stars = rows - 2;

    do {
        // Print spaces
        for (int i = 0; i < spaces; i++) {
            cout << " ";
        }

        // Print stars
        for (int i = 0; i < stars; i++) {
            cout << "*";
        }
        // Move to the next line
        cout << endl;

        // Adjust spaces and stars for the next iteration
        spaces++;
        stars -= 2;

    } while (spaces <= rows / 2);
    return 0;
} 

void oddnum(int *n ){
    if(*n%2==0){
        *n= *n+1 ;    
    }
}
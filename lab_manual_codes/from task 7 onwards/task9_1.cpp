#include<iostream>
using namespace std;
void square(void); // Used to print a solid square of *s with side length of 5 
void square (char); // Used to print a solid square of the character passed as argument with side length of 6 
void square(char, int); // Used to print a solid square of the character and the side length passed as arguments to this function  

int main() {
int num ; 
char a ;
cout<<"ENTER THE LENTH OF  SQUARE : " ; cin>>num; 
cout<<"ENTER THE CHARACTER YOU WANT TO PRINT : " ; cin>>a;
cout<<endl<<"first function calling.  " <<endl <<endl;

square() ;
cout<<"second function calling.  " <<endl <<endl;
square(a);cout<<"third function calling.  " <<endl <<endl;
square(a, num) ;
    return 0;
}
void square (void){
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j< 6; j++)
        {
cout<<"*" ; 
        }
        cout<<endl;
    }
}

void square(char inp ){
     for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j< 6; j++)
        {
cout<< 'x' ; 
        }
        cout<<endl;
    }
}

void square(char b , int c){
     for (int i = 0; i < c; i++)
    {
        for (int j = 0; j< c; j++)
        {
cout<<b ; 
        }
        cout<<endl;
    }
}
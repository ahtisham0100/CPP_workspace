#include<iostream>
#include<conio.h>
using namespace std;

int main(){
  int a,b;
    cout<<"Enter 'a' : ";
    cin>>a;
     cout<<"Enter 'b' : ";
    cin>>b;
    cout<<"( a + b )^2 = "<<(a*a)+(b*b)+(a*b)+(a*b)<<endl;
    cout<<"( a - b )^2 = "<<(a*a)+(b*b)-(a*b)-(a*b)<<endl;
    cout<<"( a + b )^3 = "<<(a*a*a)+(b*b*b)+(a*a*b)+(a*a*b)+(a*a*b)+(a*b*b)+(a*b*b)+(a*b*b)<<endl;
    cout<<"( a - b )^3 = "<<(a*a*a)-(b*b*b)-(a*a*b)-(a*a*b)-(a*a*b)+(a*b*b)+(a*b*b)+(a*b*b)<<endl;
    cout<<"( a^2 - b^2 ) = "<<(a-b)*(a+b)<<endl;
    cout<<"( a^3 - b^3 ) = "<<((a-b)*(a-b)*(a-b))+((a*b)+(a*b)+(a*b))*(a-b)<<endl;
    cout<<"( a^3 - b^3 ) = "<<(a-b)*((a*a)+(b*b)+(a*b))<<endl;
    cout<<"( a^3 + b^3 ) = "<<((a+b)*(a+b)*(a+b))-((a*b)+(a*b)+(a*b))*(a+b)<<endl;
    cout<<"( a^3 - b^3 ) = "<<(a+b)*((a*a)+(b*b)-(a*b))<<endl;

    getch();

}
#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    float centigrade;
    cout<<"Enter temperature in centigrade: "<<endl;
    cin>>centigrade;
    float fahrenheit=1.8*centigrade+32;           //Conversion formula applied
    cout<<centigrade<<" degrees Centigrade is equal to "<<fahrenheit<<" Fahrenheit.";

    getch();
    return 0;
}
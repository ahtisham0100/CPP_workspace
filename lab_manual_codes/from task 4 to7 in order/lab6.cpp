#include<iostream>
#include<conio.h>
using namespace std;

int main(){
 int num1,num2;
 cout<<"Enter number1: ";
 cin>>num1;
 cout<<"Enter number2: ";
 cin>>num2;
 if(num1>num2){
    cout<<"First number is "<<num1<<" and second number is "<<num2<<". First number is greater."<<endl;
 }
 if(num2>num1){
    cout<<"First number is "<<num1<<" and second number is "<<num2<<". Second number is greater."<<endl;
 }
 if(num2==num1){
    cout<<"First number is "<<num1<<" and second number is "<<num2<<". Both numbers are equal."<<endl;
 }

 getch();
 return 0;

}
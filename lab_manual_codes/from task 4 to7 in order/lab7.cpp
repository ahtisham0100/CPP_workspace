#include<iostream>
#include<conio.h>
using namespace std;

int main(){
 int num1,num2,num3,num4,num5;
 cout<<"Enter first number: "<<endl;
 cin>>num1;
 cout<<"Enter second number: "<<endl;
 cin>>num2;
 cout<<"Enter third number: "<<endl;
 cin>>num3;
 cout<<"Enter fourth number: "<<endl;
 cin>>num4;
 cout<<"Enter fifth number: "<<endl;
 cin>>num5;
if(num1>num2 && num1>num3 && num1>num4 && num1>num5){
    cout<<"The largest of the 5 numbers is "<<num1<<endl;
}
else if(num2>num1 && num2>num3 && num2>num4 && num2>num5){
    cout<<"The largest of the 5 numbers is "<<num2<<endl;
}
else if(num3>num1 && num3>num2 && num3>num4 && num3>num5){
    cout<<"The largest of the 5 numbers is "<<num3<<endl;
}
else if(num4>num1 && num4>num2 && num4>num3 && num4>num5){
    cout<<"The largest of the 5 numbers is "<<num4<<endl;
}
else if(num5>num1 && num5>num2 && num5>num3 && num5>num4){
    cout<<"The largest of the 5 numbers is "<<num5<<endl;
}
else{
    cout<<"All numbers are equal!"<<endl;
}

getch();
return 0;

}
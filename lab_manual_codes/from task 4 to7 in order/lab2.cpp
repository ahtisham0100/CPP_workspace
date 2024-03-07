#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter a three digit number: "<<endl;
    cin>>num;
    if(num<100 || num>1000){                        //Condition for getting a three digit number
        cout<<"Enter a three digit number! "<<endl;
    }
    else{
        int a=num/100;
        int b=(num%100)/10;
        int c=num%10;

        cout<<"There are "<<a<<" Hundreds "<<b<<" Tens and "<<c<<" Ones in this number! "<<endl;
}

getch();
return 0;
}

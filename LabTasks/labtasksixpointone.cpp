#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int sum1 ,   sum2 , num;
sum1=0;     sum2=0;
cout<<"ENTER THE NUMBER."<<endl;
cin>>num;
cout<<endl;
 cout<<"ODD NUMBERS LESS THAN OR EQUAL TO "<< num << " are :" << endl;
if(num % 2 ==0 ){
for(int i=1; i<num ; i=i+2)
{
    cout<<i<<", " ;
    sum1 = sum1 + i ;
}
cout<<endl;
cout<<"SUM Of ODD NUMBERS LESS THAN  " << num << " is : " << sum1;
 }
else {
    for(int i=1; i<=num ; i=i+2)
{
    cout<<i<<", " ;
    sum1  = sum1 + i ;
}
cout<<endl;
cout<<"SUM Of ODD NUMBERS LESS THAN  or EQUAL TO " << num << " is : " << sum1;
 }
//printing even numbers 
cout<<endl; cout<<endl; cout<<endl;
cout<<"EVEN NUMBERS LESS THAN OR EQUAL TO "<< num << endl;
if (num%2 == 0) {
for (int  j= 0; j <= num; j= j+2)
{
cout<<j<<  ", " ;
sum2+=j; 
 }
 cout<<endl;
cout<<"SUM OF EVEN NUMBERS LESS THAN OR EQUAL TO "<<num<< " is : "<< sum2 << endl;

}
else {
for (int  j= 0; j < num; j= j+=2 )
{
cout<<j<< ", " ;
sum2+=j; }
cout<<endl;
cout<<"SUM OF EVEN NUMBERS LESS THAN "<<num<< " is : " <<  sum2 << endl;

}




cin.get();
    return 0;
}

    

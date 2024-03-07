#include<iostream>
#include<math.h>
using namespace std;
int main() {
int num , sum ;
sum= 0;

cout<<"enter number calculate sum of powers till that number : " ;
cin>>num;
for (int i = 1; i <= num; i++)
{
  sum+=pow(i,i) ;
}
cout<<"Sum of numbes uptill "<< num<<"th power of " <<num<<" is : "<<sum ;
    return 0;
}
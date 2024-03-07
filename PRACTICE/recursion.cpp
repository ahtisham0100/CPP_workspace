#include<iostream>
#include <cmath>
using namespace std;
int counting(int n){
    //base case
    if(n==1 ){
        return 1;
    }
 cout<<n << " " ;
 counting(n-1) ;
}

int main(){
    int num ;
    cout<<"Enter number to print counting in reverse order : " ;  cin>>num; 
    cout<<counting(num) ;
}
/*
long factorial(long  n) {
  // base case
   if(n==0 ){
    return 1;      
             }
 long answer = n* factorial(n-1); 
   return answer ;
}
 //function for printing upto nth power of 2 ;
 int power(int number ) 
 {
    //base case 
    if(number==0 ){
        return 1;
    }
   int ans = 2 * power(number -1 ) ;
 return ans;
 }
    

int main() {
long num ;
cout<<"enter number to calculate its factorial : " ;
cin>>num ;
cout<<"factorial of " << num<<" is : "<<factorial(num) <<endl;
cout<<"Answer for  " << num<<"th power of 2 is : "<<power(num) ;


return 0 ;
*/
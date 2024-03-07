#include<iostream>
#include <cmath>
using namespace std;
int factors(int a){
    for (int i = 1; i < ( (a+1)-1 ); i++)
 {
    if (a%i==0)
    {
        cout<< i << " , " ;  
    }
    
 }
}
int main() {
 int n; 
 cout<<"Enter the num to find it's factors : " ;  cin >>n;
 cout<<"factors of " <<n << " are : " <<endl;
 cout<<factors(n) ;
 
    return 0;
}
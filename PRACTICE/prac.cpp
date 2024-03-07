#include<iostream>
using namespace std;
int main() {
    int n ;
     cin>>n; 
     int space = n/2; 
     int stars = 1;
     do
     {
        //print space 
        for (int i = 0; i < space; i++)
        { cout<<" " ;       }
        //print stars
        for (int i = 0; i < stars; i++)
        {
            cout<<"*"; }
            cout<<endl;
        space--;
        stars+=2;
        
        
     } while (space>=0);
     //lower triangle ;
      
     int spc= 1; 
     int str = stars-3; 
      do
     {
     for (int i = 0; i<spc; i++)
     {
        cout<<" " ;
     }
     for (int i =0; i < str; i++)
     {
        cout<<"*" ;
     }
     cout<<endl;
     spc++ ;
     str-=2 ;
     } while (spc<=n/2);
     
     
    return 0;
}
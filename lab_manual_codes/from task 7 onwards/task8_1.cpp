#include<iostream>
using namespace std;
char stars(char a){
for (int i = 0; i < 14; i++)
{
    cout<<a ;
}
cout<<endl ;
}   
int table(int n){
    for (int i = 1; i <=n; i++)
    {for (int j = 1; j <=10 ; j++)
    {
    cout<<i*j <<" " ;   
    }
   cout<<endl ;
  cout<<" * * * * * * * * * * * * * * " <<endl;
}
    
}
int main() {
    char a = '*' ;
    stars(a);
    int num; 
    cout<<"enter number to print tables : " ; cin>>num; 
    table(num) ;
    return 0;
}
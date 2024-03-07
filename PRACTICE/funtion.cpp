#include<iostream>
using namespace std;

char diamond(int, char) ;

int main() {

int x;
char y;
cout<<"enter num of rows : " ;
cin>>x;
cout<<"enter char : " ;
cin>>y;

cout<<diamond(x,y) ;
    return 0;
}
                                                  

//definitions of func.
 char diamond(int n ,  char b )
 {
     //upper diamond

 for (int  i = 1; i <=n; i++)
 {
     for (int  j = 1 ; j <=n-i ; j++)
     {
        cout<<" "; }
        for (int k   = 1; k<= 2*i-1; k++)
        {
cout<<b ;
        }
        cout<<endl ;
     
     } 
  //lower diamond
  for (int i = n-1; i>=1; i++)
  {
    for (int k = n-i; k >=1  ; k++)
    {
cout<<" "  ;  
}
    for (int  j = 2*i-1 ;j >= 1 ; j++)
    {
cout<<b;
   }
    cout<<endl;
  }
    
 }
    

 

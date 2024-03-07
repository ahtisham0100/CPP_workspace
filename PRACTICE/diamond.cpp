 #include <iostream>
using namespace std;
int main ()
{
  
cout<<"ENTER AN ODD NUMBER TO PRINT DIAMAOND CONTAING THAT ROWS  :  " ;
int n;      cin >> n ;
cout <<endl <<endl<< endl; 
   
                      if(n%2 !=  0 )
                     {
//upper triangle of diamond 
for (int i =1 ; i<= n ; i++ )
{
    for(int j=1 ; j <=n-i; j++)
      {
        cout<< " " ; 
        
    }
for(int k= 1 ; k<= 2* i -1 ; k++)
if(k==1 || k==2 *i -1    )
{
    cout<<"*" ;
}
else
{
    cout<<" " ;
}

cout <<endl;
}
 // lower triangle 
 for(int a=n-1 ; a>=1 ; a--)
 {
         for(int b =1 ; b <= n-a ; b++)
         {
            cout <<" " ;
         
         }
    for(int c =1 ; c<= 2* a -1 ; c++)
    if (c ==1 || c== 2* a -1 )
    {
cout<<"*" ;
   }
    
   else
   {
cout<<" " ;  }
      

cout<<endl ;    
                     } 
                     }
 else {
    cout<<"INVALID NUMBER! PLEASE RESTART PROGRAM AGAIN AND ENTER ODD NUMBER ; " << endl ;
 }


system("pause");
return 0;
}

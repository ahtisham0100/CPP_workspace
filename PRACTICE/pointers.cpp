/*  
#include<iostream>
using namespace std;
void square (int *b , int *a  ){
int temp; 
temp=*b ;
*b=*a;
*a= temp ;

cout<<"address of num1 in func is : " << &b<< endl ;
cout<< "square of num1 is : "<<*b * *b<<endl;
}
int main() {
int n1=20 ;
int n2 = 30  ;
int *a=&b; 
cout<<"value at b var is : "<<b <<endl;
cout<<"value at *a is    : "<< *a+4 <<endl;
cout
<<"value at *a is    : "<< a  <<endl;

cout<<"adress of num 1  in main is : " <<&n1 <<endl;
square(&n1 , &n2 ) ;
//AFTER SWAPPING 
cout<<"VALUE of num 1  AFTER SWAPPING  : " <<n1 <<endl;
cout<<"VALUE of num 2  AFTER SWAPPING  : " <<n2 <<endl;
    return 0;
}
            


#include<iostream>
using namespace std;
bool check(int a , int b){
    if(b%a == 0){
        return true ;
    }
    else
    {
        return false ;
    }
    
}
int main() 
{
        int a ,b  ;

   for (int i = 0; i < 4; i++)
   {
    cout<<"enter a and b : " ; 
    cin>>a>>b;
    cout<< check(a,b) ;
   }
   

    return 0;
} 
            */

           //maximum elemet in array using pointer; 
     #include<iostream>
     using namespace std;
   /*  void maximum(int * arr[7]){
        int * max= arr[0] ;
for(int i =1 ;i<7; i++ )
     if(arr[i]> max ){
*max= *arr[i] ;
     } 
     cout<<"maximum element on array is : " << *max<<endl; 
     }
      int main() {
int  array[7]= {100,20,30,10,20,11,56} ;
int *ptr =array ;
 int * max= (&array[0]) ; 
for(int i =1 ;i<7; i++ ) {
     if(ptr[i]> *max ){
*max= ptr[i] ;
     } else {
        *max = *max ;  
     }
     }
          cout<<"maximum element of array is : " << *max<<endl; 

        return 0;
     }       */

     #include<iostream>
     using namespace std;
     int main() {
int a=10;
int *b =&a ;
cout<<"a= " <<  a << endl ;
cout<<" b = " << b <<endl ;
cout<<"*b = " <<*b; 
*b=20 ;
cout<<" *b after b = 20 = "<< *b <<" and a becomes " << a<<endl;

cout<<"b " <<b <<"  and" <<  "b+1 " << b+1 << "and a " << *b +1; 
          return 0;
     }

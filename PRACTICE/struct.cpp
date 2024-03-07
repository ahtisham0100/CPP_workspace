#include<iostream>
#include <string>
using namespace std;
/*struct rectangle
{
   double lenght , width ;
   void input(){
    cout<<"enter values of length and width : " ;
    cin>>lenght >>width ;
   }
   void area() {
    cout<<"Area is " << lenght *width <<endl;
   } 
void parameter(){
    cout <<"parameter is : " << 2*(lenght + width) ;
}
};
*/ 
struct employee{
    string name ;  int age ; long number ;  
   void input (){
cout<<"Enter the name : " ; 
getline(cin , name ) ;
cout<<"Enter age : " ;
cin>>age ;
cout<<"Enter contact no : " ;
cin>>number; 
    }
void output(){
    cout<<"age is : "<< age<<endl; 
    cout<<"number is : "<< number <<endl;
    cout<<"name is : " <<name; 
} 
 } ;
int main() {  /*
   rectangle r1;
   r1.input(); 
   r1.area() ;
r1.parameter () ;
    
   employee ali, khan, shub ;
    ali.input();
   shub.output() ;
   cout<<endl ;
khan.input() ;
khan.output(); 
 */
  enum name{ali, khan , sham , ayti , daniel , zack} ;
cout<< name.1 <<endl;

   return 0;
}

#include<iostream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<iomanip>
using namespace std;
                                        void swap(int * num1 , int* num2){
                                        int temp = *num1; 
                                        *num1= *num2 ; 
                                        *num2= temp;     }
 
              void memprintdel(string* str)          { 
                cout<<"string enterd by user  is : "<<*str << endl;
                cout<<"adress of func str: " <<&str <<endl; 
                string* temporarymem= str ;
                cout<<"adress of string to which pointer points is "<<temporarymem ; 


              }                
int main() {
    
//problem 1  par1 : Declare a pointer to an integer and initialize it to the address of an integer variable. Print the value of the variable and the value pointed to by the pointer.: 
int n=10;
int * intptr1 = &n; 
cout<<intptr1<<endl;
cout<<n<<endl;
cout<<&*intptr1<<endl;   
  
    //part2: swapping the variables of int type
     int var1 =10 ; int  var2 =20 ;
    swap(&var1,&var2) ;
    cout<<"before swapping was 10 and 20 , now after swapping is : " <<var1<<"  " << var2 <<endl ;

//problem 2 : Dynamic Memory Allocation: 
/*  part1 :Allocate an array of integers dynamically and populate it with values. Print the array elements.
 part 2:  Write a program that dynamically allocates memory for a string and reads a string from the user. Print the string and then free the allocated memory.   */

//solution part 1 i.e printing array elements with the help of pointers
   int num[6]= {0,45,6,89,7,8}  ;
   int *ptrtoarray = &num[0] ;  //does'nt matter whatever the value we assign to index in giving address in loop values are printed correctly.
    for(int i=0 ; i<6 ; i++){
        cout<<num[i]<<" " ;
    }
//part 2 soultion:  Write a program that dynamically allocates memory for a string and reads a string from the user. Print the string and then free the allocated memory.
string *line = new string;
cout<<" \n enter the string : " ; 
getline(cin ,*line) ;
memprintdel(line) ;
 delete line ;
 cout<< endl<< *line; 
  
    
    //printing array in reverse order 
int array[6] = {1,0,5,6,6 ,7} ;
 int * ptrto = &array[0];   
 cout<<"array in reverse order is :  " ;
 for(int i=6-1; i>=0; i--){
    cout<<ptrto[i]<<" " ;
 }

    return 0;
}
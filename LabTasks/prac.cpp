#include<iostream>
using namespace std;
int main() {
    int counter = 0 ;
    int size = 5;
 int array1[size]={3 ,5 ,2 ,10 ,6 }   ;
 int array2[size]={10, 2, 6, 5 , 3} ;
 for (int i = 0; i <size ; i++)
 {
    for( int j = 0; j < size; j++)
    {
        if(array1[i]==array2[j]){
            counter++ ;
        }
    }
   
 }
 if(counter==size){
    cout<<"ARRAY 1 AND ARRAY 2 ARE EQUAL. " ;
   } else 
   {
    cout<<"ARRAY 1 AND ARRAY 2 ARE NOT EQUAL . " ;
   
 }
  return 0;
}
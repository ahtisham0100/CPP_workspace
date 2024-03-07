/*     logic of bubble sort algorithm
        outer iterations are n-1 ;
 inner iterations are n-1 for fisrt , n-2 for second , n-3 for third and so on ....in general it depends
on inner iteration by logic  i<n-counter; 
                                                                                                    */

#include <iostream>
using namespace std;
void swap(int& a   , int& b ){
    int temp;
    temp = a ; 
    a=b ;
    b=temp;
} ;
int main() {
int n;
cin>>n;
                //taking array as input
                                    int array[n];
                                    for(int i=0; i<n;i++){
                                    cin>>array[i] ;
                                    }
//in bubble sorting total outer iterations are n-1 and iteratikons for sorting in inner loop are n-1 for 
// fisrt iteration and n-2 for second and so on.

int counter=1; //to coutrol outer iterations
while (counter<n)
{
    for(int i=0 ; i<n-counter; i++){
    if(array[i]>array[i+1]) {
    swap(array[i], array[i+1]) ;
  }
    }
    counter++ ;
}
/*using for loop;
for(int j=1 ; j<n ; i++) { 
            for(int i=0 ; i<n-j; i++){
                    if(array[i]>array[i+1]) {
                        swap(array[i], array[i+1]) ;
                    }
                }
*/
//printing sorted array
for(int i =1; i<n ; i++)
{
    cout<<array[i] << " " ;
}
return 0;
} 

    
    

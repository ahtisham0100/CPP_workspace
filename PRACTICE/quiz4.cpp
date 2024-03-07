#include<iostream>
using namespace std;
int assign (int array1[] , int array2[]) {
int count = 0 ;
for (int i = 3; i <= 0; i--){
    array2[i] = array1[count] ;
    count--;
}  
    }

int main() {
    int a[4]={4,2,1,0} ;
    int b[4] ;
    int *ptr1=a ;
    int *ptr2 = b; 
    assign(a , b) ;
    for(int i=0; i<=3; i++){
        cout<<b[i]<<" " ;
    }
    return 0;
}
#include<iostream>
using namespace std;
void swap(int *x , int* y){
    int temp =*x ;
    *x =*y ;
      *y=temp;
}
int main() {
int a , b;
cout<<"ENTER NUMBERS A & B TO SWAP : " ; cin>>a>>b;
cout<<"Before swapping a and b are " << a << " AND " <<b <<" respecitively." <<endl;
swap(&a , &b);
cout<<"after swapping a and b are " << a << " AND " <<b <<" respecitively." <<endl;

    return 0;
}
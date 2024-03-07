#include<iostream>
using namespace std;
void rightrotate(int *a, int* b , int* c , int* d ){
    int temp = *a;
    *a = *d ;
    *d= *c ;
    *c=*b ;
    *b=temp ;
}
void leftrotate(int *a, int* b , int* c , int* d ){
    int temp = *d;   
    *d = *a;
     *a=*b ;
    *b=*c ;
    *c=temp ;

}

int main() {
    int num1 , num2, num3 , num4 ; 
    cout<<"enter numbers 1, 2,3 and 4 : " ; cin>>num1>>num2>>num3>>num4; 
    rightrotate(&num1,&num2 ,&num3,&num4) ;
    cout<<"after right rotation number 1-4  are " << num1 <<" "<<num2<<" "<<num3<< " "<<num4<<endl;
    leftrotate(&num1,&num2 ,&num3,&num4) ;
    cout<<"after left rotation number 1-4  are " << num1 <<" "<<num2<<" "<<num3<< " "<<num4<<endl;

    return 0;
}
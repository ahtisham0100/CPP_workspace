/*
 logic : we find the smallest element in array and place it at the begininning 

*/
#include<iostream>
using namespace std;
void   swap(int& a , int& b) {
int temp ;
temp=a ;
a=b;
b=temp;
} 
int main() {
int n ;
cout<<"enter size of array : " ; cin>>n;
int array[n] ;
for(int i =0 ; i<n ; i++){
    cin>>array[i];
}
                        //selection sort  main algorithm ; 
                            for (int  i = 0 ; i< n-1; i++)
                            {
                                for (int j = i+1; j<n ; j++){
                                    if(array[j]<array[i]){
                                        swap(array[i], array[j]) ;
                                    }
                                }
                            }

//printing the array
for (int  i = 0; i < n; i++)
{
    cout<< array[i] << " "  ;
}



    return 0;
}
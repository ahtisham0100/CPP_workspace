#include<iostream>
using namespace std;
int swap(int *a , int* b){
    int temp;
    *a=*b;
    *b=temp ;
}
int main() {
int n=5;
    int array1[n]={1,4,5,2,7} ;
    for (int i = 1; i < n; i++)
    {
      for (int  j = 0; j<5; j++)
      {
        //descending
        if (array1[i]>array1[j])
        {
            swap(array1[i], array1[j]);
        }
        
      }
      
    }
   cout<<"sorted array ind descending order is: " ;
   for (int i = 0; i < n; i++)
   {
    cout<<array1[i]<<" ";
   }
   cout<<endl;
    for (int i = 1; i < n; i++)
    {
      for (int  j = 0; j<5; j++)
      {
        //ascending
        if (array1[i]<array1[j])
        {
            swap(array1[i], array1[j]);
        }
        
      }
      
    }
     cout<<"sorted array ind ascending order is: " ;
   for (int i = 0; i < n; i++)
   {
    cout<<array1[i]<<" ";
   }
    
    return 0;
}
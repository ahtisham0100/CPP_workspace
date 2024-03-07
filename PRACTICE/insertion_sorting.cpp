/*
insert and element in sorted array to its correct position.
we consider that the forst element of array is sorted and the others are unsorted , so we begin from index 1;
                                */


#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter size of array : " ;
    cin>>n;
    int array[n]; 
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
                      

//main algorithm for insertion sorting ;

                    for(int i=1; i<n ;i++)         //begins from index 1 because we consider first element to be sorted....
  {
                        int current=array[i]    ;    //to keep record of current index.
                        int j= i-1 ;               //to compare each element with its previous for sorting.
                        while(current<array[j] && j>=0)
                        {
                            array[j+1] /*current*/ = array[j] /*previous*/ ;
                         j--;
                        }
   array[j+1] = current ;         
  }

//printing the array
 for(int i =0; i<n; i++) {
    cout<<array[i] <<" " ;
 }





    return 0;
}
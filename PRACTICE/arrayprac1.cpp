#include <iostream >
using namespace std;
int main()
{
  
                                                                  //  finding maximum and minimum through array  
int n ;
cout<<"size of array : " ;  cin>>n;
//array  of size n 
 int array[n];
 for (int i =0 ; i<n; i++)
 {
cout<<"enter value for index "<<i<< " :  " ;  
cin>>array[i];
}
//printing maximum and minimum nums 
int max=array[0]; 
int min=max ;
for(int i =1 ; i<n ; i++)
{
    if(max<array[i]){
        max = array[i];
        }
}
 
  for(int i =1 ; i<n ; i++)
{
    if(array[i]<min){
        min = array[i];
        }
}

if (max==min) {
  cout<<"Max. and minimum numbers are same: :  " << max <<" and "  <<max << endl ;
}
else {

cout<<"Maximum number is : " << max  <<endl;
cout<<"Minimum number is : " << min   <<endl;
}

                                                                               // searching throgh array 
                         int num;
                         cout<<"Enter number you want to search in array : " ;   cin>>num;

                           for (int i = 0; i < n; i++)
                           {
                          if (num == array[i])
                          {
                            cout<< num <<" is found at index : " << i <<endl;
                          }
                           }                           
}


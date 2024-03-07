#include<iostream>
using namespace std;
int main() {

    int array1[5]={5,4,3,2,1} ;
    int array2[5] ;
    for (int i = 0; i < 5; i++)
    {
       array2[i] = array1[i] ;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int  j = 1; j <= array2[i]; j++)
        {
            cout<<"*"<<" " ;
        }
        cout<<endl;
    }
    
    return 0;
}
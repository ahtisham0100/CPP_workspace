#include <iostream>
using namespace std;
int main ()
{
int n;
cin>>n; 
int num[n];

//input 
for(int i =0 ; i<n ; i++)
{
   cin>>num[i];
}
//output 
for(int j=0 ; j<n; j++)
{
cout<<"ENTERED VALUE FOR [" << j <<"] = " << num[j] << endl ;
}

}

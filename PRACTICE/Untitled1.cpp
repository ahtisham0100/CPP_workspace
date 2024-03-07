/*#include <iostream>
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
cout<<"ENETEED VALUE FOR [" << j <<"] = " << num[j] << endl;
}
system("pause");

}
*/
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
int n;
cin>>n;
//printing right traingle 
for(int i=1 ; i<=n; i++)
{
    for(int j=1 ; j<=n-i; j++ ) 
    {
        cout<<" " ; }
        for(int k=1 ; k<=2*i-1; k++) {
            cout<<"*";
        }
cout<<endl;
    
}
system("pause");
    return 0;

}

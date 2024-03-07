#include <iostream>
using namespace std;

int main() {
   float num;
   cout<<"Enter any float value: "<<endl;
   cin>>num;
   while(num>=0){
    cout<<num<<" ";
    num=num-0.5;
    cout<<endl;
   }
   return 0;

    }

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
   float num1;
   float num2;
   cout<<"Enter num1: "<<endl;
   cin>>num1;
   cout<<"Enter num2: "<<endl;
   cin>>num2;
   float percentage;

   if(num1>num2){
   percentage=(num2/num1)*100;
   cout<<num2<<" is "<<percentage<<"% of "<<num1;
   }
   else if(num2>num1){
   percentage=(num2/num1)*100;
   cout<<num2<<" is "<<percentage<<"% of "<<num1;
   }
   else{
    cout<<"Both numbers are equal and are 100% of each other!"<<endl;
   }

   getch();
   return 0;
}

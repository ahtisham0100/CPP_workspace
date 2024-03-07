#include<iostream>
#include<conio.h>
using namespace std;

int main(){
  int num,num1,num2,num3,num4;
  cout<<"Enter a number: ";
  cin>>num;
  num1=++ ++ ++ ++ ++num;
  cout<<-- -- -- -- --num<<" + 5 = "<<num1<<endl;
  num2=-- -- --num;
  cout<<++ ++ ++num<<" - 3 = "<<num2<<endl;
  num3=++num;
  cout<<"("<<--num<<" + 3) - 2 = "<<num3<<endl;
  num4=-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --num;
  cout<<"(("<<++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++num<<" + 5)*2/(20 + 3)) = "<<num4<<endl;
  
  getch(); 
  return 0;

}

#include<iostream>
#include<string>
using namespace std;
int count(const string &str){
   int value=0 ;
   for(char ch:str){
    if(isalpha(ch)){
value+=tolower(ch) - 'a' +1 ;
    }
   } 
return value; 
}
int main() {
   
   string str[5] ;
   int n=0;
   while (n<=4)
   {
    cout<<"enter string  " <<n+1<<" : ";
   getline(cin, str[n]);
  n++; }
   
   //calculating maximum value and max index;
   int maximum =0 , result=0 , index;
   for (int i = 0; i < 5; i++)
   {
    result = count(str[i]);
if(result>maximum){
    maximum=result;
   index=i;
}
   }
   cout<<"maximum string has size "<<maximum <<" and is at index : " <<index <<endl;
    return 0;
}
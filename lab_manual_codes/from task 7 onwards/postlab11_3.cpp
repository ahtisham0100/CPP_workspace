#include<iostream>
#include<string>
using namespace std;
int main() {
    int n=5;
    string name[n] ;
    for (int i = 0; i < n; i++)
    {
    cout<<"ENTER THE NAME " <<i<<" : " ;
    getline(cin, name[i]) ;
    }
    //sorting 
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j <n; j++)
        {
            if(name[i]>name[j]){
                string temp = name[i];
                name[i]=name[j];
                name[j]=temp;

            }
        }
        
    }
    cout<<"ARRANGED NAMES ARE : " <<endl;
    for (int i = 0; i < n; i++)
    {
cout<<name[i] <<endl;
    }
    
    return 0;
}
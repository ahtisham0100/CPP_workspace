#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int score;
    char grade;
    cout<<"Enter student's score: "<<endl;
    cin>>score;
    if(score>=85 && score<=100){
        grade='A';
        cout<<"Student passed with "<<grade<<" Grade"<<endl;
    }
    else if(score>=72 && score<=84){
        grade='B';
        cout<<"Student passed with "<<grade<<" Grade"<<endl;
    }
    else if(score>=60 && score<=71){
        grade='C';
        cout<<"Student passed with "<<grade<<" Grade"<<endl;
    }
    else if(score>=50 && score<=59){
        grade='D';
        cout<<"Student passed with "<<grade<<" Grade"<<endl;
    }
    else if(score>=0 && score<=49){
        grade='F';
        cout<<"Student failed with "<<grade<<" Grade"<<endl;
    }
    else{
        cout<<"Invalid Input!"<<endl;
    }

    getch();
    return 0;
}
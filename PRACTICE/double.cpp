#include<iostream>
using namespace std;
double sum(double , double) ;
int main() {
double x, y;
cout<<"enter nums : " ;
cin>>x>>y;
  cout<<sum(x,y) ;

    return 0;
}
double sum(double a , double b ){
    double c ;
    c= a+b;
    return c; 
}
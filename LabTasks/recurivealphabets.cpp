#include<iostream>
using namespace std;
void recur(int n){
    if (n<65)
    {
return ;   
}
    cout<<static_cast<char>(n) <<" " ;
return recur(n-1) ;

}
int main() {
    int n = 90 ;  //capital z has ASCII value 90 
    recur(n) ;
    return 0;
}
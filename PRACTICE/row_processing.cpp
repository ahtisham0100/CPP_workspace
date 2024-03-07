#include<iostream>
using namespace std;
int main() {
 int row,column;
 cin>>row>>column;
 int array[row][column] ;
 for(int i=0 ;i<row;i++ ){
    for(int j=0; j<column ; j++)
    {
        cin>>array[i][j];
    }
 }
 int sum[row] ={};
 //row processing
 for(int i=0 ; i<row ;i++){
    for(int j=0 ; j<column ; j++){
        sum[i]+=array[i][j] ;
    }
 }
 for(int i=0; i<row; i++){
    cout<<sum[i] << " " ;
 }
    return 0;
}
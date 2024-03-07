#include <iostream>
using namespace std;
int main(){

    float bill,tip ;
    cout << "Enter the bill amount: Rs " ;
    cin >> bill ;
    if(bill<0){
      cout << "Invalid amount. " << endl ; 
                  cout << "Enter the bill amount: Rs " ;
                  cin >> bill ;
	 }
    cout << "Enter the tip amount: Rs " ;
    cin >> tip ; 
    if(tip<0){
    	cout << "Invalid amount. " ;
      cout << "Enter the tip amount: Rs " ;
    cin >> tip ; 
		} 
    float amount = bill+tip ;
    cout << "Tip is: Rs : " << tip << endl;
    cout << "Total amount is: Rs " << amount << endl; 
    return 0 ;
}

#include <iostream>
#include <cmath>

using namespace std;
float pi = 3.141592654 ;

int main(){
	
	float a,b,c,d,e,f,g,h,i,j,k,l,m,n ;
	
	//Displaying sin func.
	cout << "Enter angle of sin(in degree) = " ; 
	cin >> a ;
	b = sin ((pi / 180)*a) ;
	cout << "Value of sin(" << a <<") is = " << b << endl ;
	
	//Displaying cos func.
	cout << "Enter angle of cos(in degree) = " ;
	cin >> c ;
	d = cos ((pi / 180)*c) ;
	cout << "Value of cos(" << c <<") is = " << d << endl ;
	
	//Displaying tan func.
	cout << "Enter angle of tan(in degree) = " ;
	cin >> e ;
	f = tan ((pi / 180)*e) ;
	cout << "Value of tan (" << e <<") is = " << f << endl ;
	
	//Displaying power func. of number
	cout << "Enter number(Raised to the power) = " ;
	cin >> g ;
	cout << "Enter power = " ;
	cin >> h ;
	cout << "Answer = " << pow(g,h) << endl ;
	
	//Displaying square root func.
	cout << "Enter number(Square root) = " ;
	cin >> k ;
	cout << "Square root = " << sqrt(k) << endl ;
	
	//Displaying floor func. of number
	cout << "Enter floor number = " ;
	cin >> i ;
	cout << "Floor = " << floor(i) << endl ;
	
	//Displaying ceil func. of number
	cout << "Enter ceil number = " ;
	cin >> j ;
	cout << "Ceil = " << ceil(j) << endl ;
	
	//Displaying natural log func.
	cout << "Enter value of natural log number = " ;
	cin >> l ;
	cout << "Natural log = " << log(l) << endl ;
	
	//Displaying common log func.
	cout << "Enter value of common log number = " ;
	cin >> m ;
	cout << "Value of common log = " << log10(m) << endl ;
	
	//Displaying exponential func.
    cout << "Enter value of Exponential = " ;
    cin >> n ;
    cout << "Value of Exponential = " << exp(n) << endl ;
    
    return 0 ;
	
	
}

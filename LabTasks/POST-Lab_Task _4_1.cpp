#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a , b;
cout<<"ENTER THE VALUE OF A  : " ;
cin>>a;
cout<<"ENTER THE VALUE OF B  : " ;
cin>>b;

cout<<"1. (a + b)2 = a2 + 2ab + b2 \t \t \t  :" << pow(a,2) + 2*a*b + pow(b,2) << endl;
cout<<"2. (a - b)2 = a2 - 2ab + b2 \t \t \t  :" << pow(a,2) - 2*a*b + pow(b,2) << endl;
cout<<"3. (a + b)3 = a3 + 3a2b + 3ab2 + b3   :" << pow(a,3) + 3* pow(a,2) * b + 3* pow(b,2) * a   + pow(b,3) << endl;
cout<<"4. (a - b)3 = a3 - 3a2b + 3 ab2 - b3  :" << pow(a,3) - 3* pow(a,2) * b + 3* pow(b,2) * a   - pow(b,3) << endl;
cout<<"5. (a2 - b2)= (a - b) (a + b)         :" << (a -b ) * (a + b) << endl;
cout<<"6. (a3 - b3)= (a - b)3 + 3 a b (a - b):" << pow((a-b),3) + 3*a*b*(a - b) << endl;
cout<<"7. (a3 - b3)= (a - b) (a2 + a b + b2) :" << (a - b) * ( pow(a,2)+ a*b + pow(b,2)) << endl ;
cout<<"8. (a3 + b3)= (a + b) (a2 - a b + b2) :" << (a+b) * ( pow(a,2)- a*b + pow(b,2) )  << endl ; 
cout<<"9. (a3 + b3)= (a + b)3 - 3 a b (a + b):" << pow((a+b),3)- 3*a*b*(a + b) << endl;



      cout<<endl;
      cout<<endl;
      cout<<endl;
      cout<<"   \t \t \t \t Program has finished." << endl;

cin.get();
return 0;
}
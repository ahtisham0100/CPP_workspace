#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout<<" \t \t \t \t \t  GREATEST COMMON DIVISOR FINDER " << endl<< endl<<endl;  
    
        int  num1 , num2,gcd;
        cout<<"ENTER THE FIRST NUMBER : " ;
        cin>>num1;
        cout<<"ENTER THE SECOND NUMBER : ";
        cin>>num2;
        for (int i = 1; i <= num1 && i<=num2 ; i++)
        {
            if (num1%i==0 && num2%i==0)
            {
                gcd=i;
            }
        }
        cout<<"GREATEST COMMON DIVISOR OF " <<num1 << " and " << num2 <<" IS : " << gcd << endl;


        
    
    system("pause");
    return 0;
}
#include <iostream >
using namespace std;
int main()
{
int prime = 2 ;
int n=1;
while(n<=100)
{
    if( prime<10 ) 
    {
    cout<<prime ;
    }


else if (prime>10) {
 if(prime%2 !=0 && prime%5!=0  && prime%3!=0)
 {
    cout<<prime <<" "; 
    n++ ;
    }
prime++ ;


}



}
}
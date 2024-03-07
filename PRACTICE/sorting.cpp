#include <iostream>
using namespace std;
int main()
{
char small[26]={'a','b', 'c' , 'd' , 'e' , 'f', 'g' , 'h', 'i' , 'j' , 'k' , 'l' , 'm' , 'n', 'o' ,'p' ,'q','r','s','t','u','v','w','x','y','z'}
char capital[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
char  array[5][10] ;
int sum=0 ;
// taking 5*10 arrays
        for (int i=0 ; i<5 ; i++){
            cout<<"enter character string " << i+1 <<" : " ;
            for(int j=0; j<10 ; j++){
                cin>>array[i][j] ;
                for(int k =0 ; k<26 ; k++)
            {
                    if( array[i][j] == small[i]|| array[i][j] ==capital[i]) {
                        sum=sum+1 ; 
                    }
                }
            }
        }





}
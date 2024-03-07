#include <iostream>
#include <cstdlib>  // cstdlib contains rand which is used to generate random value between 0 and RAND_MAX
#include <ctime>
#include <random>
using namespace std;
int main()
 {
      srand(time(0));

cout << " \t \t \t \t \t \t   WELCOME TO BLACK JAKE GAME." << endl << endl<< endl<< endl;
//***************************declaring variables for player and computer.*******************************************************
int playerscore , computerscore ; //here playerscore  and computerscore are initial player and computer scores respectively 
    srand(time(0));
 
 computerscore = rand() % 10 +2 ;   
 // here rand() % 10 gives us the remainder of random number that would be b/w 0 and 9 so we add + 2 to get 2 incase of zero and 11 incase of 9
cout<<"Computer's score =  " << computerscore << endl;

//decaring variable to ask player whether he wants to hit or stand 
char playersays;

do 
{
                playerscore = rand() % 10 +2 ;   
                cout<<"Player's score = " << playerscore << endl;

// if the player hits
cout<<"DO YOU WANT TO HIT (h) OR STAND (s)  ? " <<endl;
cin>>playersays; 
if (playersays=='h' || playersays =='H' )
{
 int newscore = rand() % 10 + 2;
playerscore=newscore + playerscore;
cout<<"Playes has score = " << playerscore << endl;  
}
                  if ( playerscore> 21 )
                   {
                 cout<<"GAME HAS BUSTED, YOU LOST!"<< endl;
                  } 
 
} 
while (true); 


cin.get();
return 0; 
 }
# include <iostream>
# include <cmath>
# include <cstring>
using namespace std;
int main()
{
	// declaring arrays
	char array[5][10];
    char small [26]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char capital[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int SUM[5];
    
    // promting user to enter a string
    
   	cout<<"\n enter a string :";
	for(int i=0;i<5;i++)
	{
      cin>> array[i];
    }
    
    // loop for the number of rows(string)
     int sum;
   	for(int i=0;i<5;i++)
	{
		sum=0;
		
		// loop for characters in a row
		for(int j=0;j<strlen(array[i]);j++)
	 {
	 	// loop calculating the sum
		for(int k=0; k<26;k++)
   	   { 
	 	  if(capital[k]==array[i][j] || small[k]== array[i][j] )
	 	{ 
	 		sum += (k+1);
	 	  	break;
		}
		
	   } 	
     }
   	 SUM[i]=sum;
   }
   
  // loop outputing the sum of each string
   for(int i=0;i<5;i++)
   {
   	cout<< "\n sum of string "<< i+1 <<" : "<< SUM[i];
   }
    
   // loop for calculating the max sum

   int maxsum=0;
   int n;
  for(int i=0;i<5;i++)
   {
   	if (SUM[i] > maxsum)
   	{
   		maxsum = SUM[i];
   		n = i;
	}
   }
  
    cout<<"\n";
   	cout<<"\n  the string \" " << array[n] << "\" has the highest sum  "<< maxsum<<endl;
}
# include <iostream>
using namespace std;

int main()
{ 
   float array[7][7]={0};
   
   cout<<"\n the 7 * 7 array is"<<endl;
   cout<<"\n";
   for(int i=0;i<7;i++)
   {
   	for(int j=0;j<7;j++)
   	{
   	  cout<<array[i][j]<<" ";
	 }
	 cout<<endl;
     }
}
#include <iostream>
using namespace std;
int main()
{
	char country[5][30];
	
	cout<<"\n enter the name of countries :";
	for(int i=0;i<5;i++)
	{
		cin>>country[i];
	}
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(country[j][0]<country[i][0])
			for(int k=0;k<30;k++)
			{
				char temp =country[j][k];
				country[j][k]=country[i][k];
				country[i][k]=temp;
	    	}
	   }
   }
   
   	cout<<"\n the name of countries  in alphabetical order :";
	for(int i=0;i<5;i++)
	{
		cout<<country[i]<<endl;
	}
}
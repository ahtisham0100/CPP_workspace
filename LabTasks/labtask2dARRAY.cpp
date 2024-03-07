#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char capital[26], small[26];
	string words[5];
	int stringvalue[5]={0,0,0,0,0},sum,len;

	capital[0]='A';
	for (int i=1;i<26;i++)
	{
		capital[i]=capital[i-1]+1;
	}
	small[0]='a';
	for (int i=1;i<26;i++)
	{
		small[i]=small[i-1]+1;
	}
	
	
	
	for (int i=0;i<5;i++)
	{
		cout<<"Enter string no "<<i+1<<" :";
		cin>>words[i];
		sum=0;
		len=words[i].length();
		for(int j=0;j<len;j++)
		{
			
		for (int k=0;k<26;k++)
		{
			if(words[i][j]==capital[k] || words[i][j]==small[k])
			{
				sum=sum+k+1;
				break;
			}
		}
		}
		stringvalue[i]=sum;
		
	}
	
	int position=0,highest=stringvalue[0];
	for (int i=1;i<5;i++)
	{
	     if (stringvalue[i]>highest)
		 {
		 	highest=stringvalue[i];
		 	position=i;
		 }	
		
	}
	cout<<words[position];
	

	

	
	
	return 0;
}
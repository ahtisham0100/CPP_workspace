# include<iostream>
# include <ctime>
# include <cstdlib>
using namespace std;
int main()
{
	srand(time (0));
	int num, count;
	int my_array[10][10];
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			my_array[i][j]= rand()%10;
		}
	}
	cout<<"\n enter the number you want to find out in the array :";
	cin>>num;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			if (my_array[i][j]==num)
		{
	    	cout<<"\n  found location ["<< i <<"]["<< j <<"]"<<endl;
			count++;
		}
       }
    }
       if(count<=0)
     cout<<" invalid number ";
     else
     cout<<"\n there are "<< count << " instances ";
     
     cout<<"\n the integer array is :"<<endl;
     for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
	    	cout<<my_array[i][j]<<" ";	
		}
		cout<<endl;
	}
}
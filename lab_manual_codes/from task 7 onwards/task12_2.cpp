# include <iostream>
using namespace std;

int main()
{
	int arr[2][4];
	
	for(int i=0;i<2;i++)
	{
	 cout<<"\n enter the values in row "<<i<<endl;
	for(int j=0;j<4;j++)
	{
		cout<<"Location ["<<i<<"]["<<j<<"] :";
		cin>>arr[i][j];
	}
}
 cout<<"\n the stored values are "<<endl;
     	for(int i=0;i<2;i++)
     	{
         for(int j=0;j<4;j++)
    	{
     		cout<<arr[i][j]<<" ";
		 }
		 cout<<endl;
	}
}
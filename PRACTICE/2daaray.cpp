#include <iostream>
using namespace std;
int main()
{
int course , num;
cout<<"Enter number of students  : " ;   cin>>num;
cout<<endl;
cout<<"Enter number of courses   : " ;   cin>>course ;
cout<<endl;
                    
                                              int students[num][course];
                                              for(int i=0 ; i < num ; i++)
                                              {
                                                                     for(int j=0 ; j<course ; j++) 
                                                                     {
                                                                        cout<<"Enter score of course for index[" <<i<<"][" <<j<<"]  : " ;   
                                                                        cin>>students[i][j] ; 
                                                                     }
cout<<endl;
                                              }

   for(int i=0 ; i < num ; i++)
     {              
            cout<<"scores of student " << i + 1 << " are as follows : " ;
for(int j=0 ; j<course ; j++) 
               {
 cout<<students[i][j] << "   " ;
 }
cout<<endl ;
        }             
                                                    
}
#include<iostream>
#include<iomanip>
using namespace std;

const int student=5 ; const int course=3;    //for 2-d array of size 5*3  ....size canbe easily changed from here 
const int total_marks=100;             //total marks of each subject are hundred ...can be changed if total marks are 75, 50,25, 30 etc,...

void inputmarks(int marks[student][course]) ;     //task 1+2 ; 

void updatemarks(int marks[student][course]) ;
void grades(int marks[student][course]) ;         //grades of student

void average(int marks [student][course]) ;       //grades of subject / course 

void subwiseave(int marks[student][course]);      //task 5 

int main() {

//array for storing marks ;
    int marks[student][course];
  
    cout<<" ........................................................................................"<<endl<<endl<<endl ;
    cout<<"|                              Grade management system                                  |  "<<endl<<endl<<endl;
    cout<<"........................................................................................."<<endl<<endl<<endl ;

// task 1 and task2  : storing input marks in 2-d array
            inputmarks(marks) ;

//task 1 : updating marks function calling 
            updatemarks(marks) ;

// task 3: calling function to print grades of each student in each sunject 
            grades(marks) ; 

//task 4: calling function to print Average  of each student and average of  each sunject 
            average(marks) ;

//task 5: calling function to print the student-wise and subject-wise grades along with their averages         
            subwiseave(marks) ;
            

            cout<<endl<<endl<<endl;
system("pause") ;
    return 0;
}
 

//defining function for taking input 
void inputmarks(int marks[student][course]) {

    for(int i =0 ; i< student; i++){
        cout<<"Enter marks for student " << i+1 <<" ; " <<endl ;
for (int  j = 0; j < course; j++)
{
    do
    {
        cout<<"in course " << j+1 << " :  " ;
        cin>>marks[i][j];
        if(marks[i][j]<0 || marks[i][j]>100){
            cout<<"invalid input !!! PLEASE ENTER MARKS BETWEEN 0 AND 100 ONLY. " <<endl;
        }
    } while (marks[i][j]<0 || marks[i][j]>100 );
    
}
cout<<endl;
    }
    cout<<".........................................................................................." <<endl; 

}


//funtion for updating marks : 
 void updatemarks(int marks[student][course]){

cout<<"THE ENTERED OF STUDENTS IN EACH COURSE ARE :  " <<endl <<endl<<endl ;
    for(int i =0 ; i< student; i++){
        
      while (i==0 )    //for printing row of courses upto n courses in upper row , it works only one time upto nth course;
      {
        cout<<"\t" ; //for table allignment 
      for (int  i = 0; i < course ; i++)
      {
        cout<<setw(10)<<"Course"<<i+1  ;
        
      }
cout<<endl;   
break;  
      } 
 //for printing student #  with each iteration     
cout<<"student " << i+1 <<" : ";
for (int  j = 0; j < course; j++)
{ 
       cout << "\t "<<marks[i][j] ;  
          }
        cout<<endl;
        }
 
 
 int choice, n, m, updatedmarks;  //n is for rows , m for columns;

    cout << endl << "Do you want to update marks of any student? Press 1 for yes and 0 for no: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            
            cout << "Enter the student to update his/her marks: ";
            cin >> n;
            cout << "Enter course whose marks you want to update: ";
            cin >> m;

            if (n >= 1 && n <= student && m >= 1 && m <= course) {
                cout << "Previous marks are: " << marks[n - 1][m - 1] << endl;
                cout << "Enter new marks: ";
                cin >> updatedmarks;
                marks[n - 1][m - 1] = updatedmarks;
                cout<<"marks of student "<<n <<" in course "<<m <<" have been updated to : " <<marks[n - 1][m - 1] <<endl<<endl<<endl;
            } else {
                cout << "Invalid student or course index." << endl;
            }
            break;
        }
        case 0: {
            cout << "You opted not to update the marks!" <<endl<<endl<<endl <<endl;
            break;
        }
        default: {
            cout << "Invalid choice! or you opted not to update marks " << endl;
        }
    }




    cout<<".........................................................................................." <<endl; ;
 }


   //function for grading in 3 catogories.

void grades( int marks[student][course]) {

    for (int  i = 0; i < student; i++)
    {
        cout<<"Grades of student " << i+1 << " in : "<< endl ;
        for (int j = 0; j < course; j++)
        {
           if(marks[i][j]>=80 ){
cout<<" subject " << j+1 << "  is : A  "  <<endl ;
           }
          else   if(marks[i][j]>=60 && marks[i][j]<80){
cout<<" subject  " << j+1 << " is : B   " <<endl   ;
           }
            else   if(marks[i][j]>=40  && marks[i][j]< 60 ){
cout<<" subject " << j+1 << "  is : C  "  <<endl ; 
            }
      else
        cout<<" subject " <<  j+1 << " is : F " <<endl;
      }
      cout<<endl;    
    }
cout<<"........................................................................................."<<endl ;

 }
        
//function for calculating subject and course average;
    void average(int marks[student][course]){
        int studentaverage[student] ;    //array to store student average 
        int courseaverage[course]  ;     //array to store course average
      //row procwssing to find average of  student
        for (int  i = 0; i < student; i++)
        {  
            int sumstudent=0 ;
            for (int  j = 0; j < course; j++)
            {
            sumstudent+=marks[i][j];
            studentaverage[i] = ( sumstudent * 100  ) / ( course * total_marks )  ;}
            cout<<"Average marks of student " << i+1 << " are : " << studentaverage[i] <<endl ; 
        }
cout<<"........................................................................................." <<endl;
    //column processing for average course marks 
       for (int  i = 0; i < course; i++)
        {  
            int sumcourse=0 ;   //sum becomes zero after each iteration .
            for (int  j = 0; j < student; j++)
            {
            sumcourse+=marks[j][i]; 
            courseaverage[i] = ( sumcourse * 100 )/ (student * total_marks)  ;}
            cout<<"Average marks in course " << i+1 << " are : " << courseaverage[i] <<endl ; 
        }
cout<<".........................................................................................." <<endl; ;
    }



//defining function to calculate subject wiese grade and average 


void subwiseave(int marks[student][course]){
    int studentavg[student] ={} ;  //array to store student average
    int subjectavg[course]= {};    //array to store course average  

 for (int i = 0; i <student ; i++)
 {   
    int sum=0;     //evertime one iteration completes sum is again zero ;
    for (int j = 0; j < course ; j++)
    {
        sum+=marks[i][j] ;
    }
   studentavg[i] =  (sum*100)/(total_marks * course) ;   //storing average in array
cout<<"Student " << i+1 <<" has marks : " << sum  << " , average marks : " <<  studentavg[i] ; 
if( studentavg[i]>=80 ){
cout<<" and average grade " << "  is : A  "  <<endl ;
           }
      else if( studentavg[i]>=60  ){
cout<<" and average grade " << "  is : B  "  <<endl ; 
      }
  else if( studentavg[i]>=40 ){
cout<<" and average grade " << "  is : c  "  <<endl ;
           }
           else if( studentavg[i]<40 ){
cout<<" and average grade " << "  is : F  "  <<endl ;
           }

      }
      cout<<endl;    
cout<<".........................................................................................." <<endl; ;
 
  //column processing for average course marks 
       for (int  i = 0; i < course; i++)
        { 
            int sumcourse=0 ; //sum is zero after each iteration 

            for (int  j = 0; j < student; j++)
            {
            sumcourse+=marks[j][i];  
            }
            
            subjectavg[i] = ( sumcourse * 100 )/ (student * total_marks)  ;
            cout<<"Average marks in course " << i+1 << " are : " << subjectavg[i] ; 

 //below are condition for grading            
           if( subjectavg[i]>=80 ){                         
cout<<" and average grade is : A  "  <<endl ;
           }
      else if( subjectavg[i]>=60  ){
cout<<" and average grade is : B  "  <<endl ; 
      }
  else if( subjectavg[i]>=40 ){
cout<<" and average grade is : c  "  <<endl ;
           }
           else if( subjectavg[i]<40 ){
cout<<" and average grade  is : F  "  <<endl ;
           }

        }


 } 
 
 
   
 


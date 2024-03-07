#include<iostream>
int x = 3 ;
int grading(int , int , int array[][x] ) ;     //declaring a function for grading into three catogaries 
int avg(int , int ) ;      //for subject and course average
using namespace std;
int main() {
int students, courses ;
cout<<"Enter the no. of students : " ; 
cin>>students ;
cout<<"Enter the no. of courses  : " ; 
cin>>courses;

//array for storing marks
int marks[students][courses] ; 

 //for storing  marks in 2-d array
int student_average[students] ;  //array to store student average marks ;
int subject_avg[courses] ;       //array to store course average  marks ; 
//calling inputmarks  function for taking input from the user 
for(int  i= 0 ;  i<students ; i++ ){
    cout<<"Enter marks of student " << i+1 <<" : " <<endl; 
    for (int  j = 0; j < courses ; j++) {
cout<< "In course " <<  j+1 <<" : "; 
 cin>>marks[i][j];
    }
   cout<<endl; 
}

//calling grading function to print grades(three categories i.e "A" , "B" , "C")
 grading(students, courses ) ;  
//calling function for calculating subject and course averge



for (int  i = 0; i < students; i++)
{
  for (int j = 0; j <courses ; j++)
  {
          cout<<marks[i][j] << "  " ;
  }
  
}

    return 0;
}




/*
//defing function for taking input 
int inputmarks( int  marks[] [] )      {
 
//taking input from the user .
for(int  i= 0 ;  i < n ; i++ ){
    cout<<"Enter marks of student " << i+1 <<" : " <<endl; 
    for (int  j = 0; j < m ; j++) {
cout<< "In course " <<  j+1 <<" : "; 
 cin>>marks[i][j];
    }
   cout<<endl; 
}

        }   */

//defing function for grading 
int grading(int n, int m , int marks[][m]) {
  
    for(int  i= 0 ;  i < n ; i++ ){
    cout<<"Grade of student " << i+1 <<" :  " <<endl; 
    for (int  j = 0; j < m ; j++) {
      if( marks[i][j] >=70 && marks[i][j] <=100 )
      { cout<< "in course " <<  j+1 <<"  is \" A \"  "<<endl;  }
else if(marks[i][j] >=50 && marks[i][j] <=69 )
      { cout<< "in course " <<  j+1 <<"  is \" B \" "<<endl;  }
else if  ( marks[i][j] <50 )
      { cout<< "in course " <<  j+1 <<"  is \" F \" "<<endl;  }
    }
   cout<<endl<<endl; 
}

} 
/*
//defineing average function to for calculating aveage of student and average of course
 int avg(int n  , int m)  {  
  int sumofstudent=0;
  int sumofcourse=0;
 //row processing for storing student average 
  for  (int i= 0 ;  i < n ; i++ ) {
   for (int  j = 0; j < m ; j++)
   {
   sumofstudent +=  marks[i][j];
   }
  student_avg[i]=(sumofstudent / m) ;     //sum divided by no of  courses "m" gives average of student .
    }
 //coulumn processing for storing average course marks 
   for (int i=0 ; i< m ; i++ ){
    cout<<"Avergage marks in course " <<i+1 <<" are : " ;
    for(int j =0 ; j<n ; j++ ) {
    sumofcourse +=   marks[j][i] ;
    }
  subject_avg[i]=(sumofcourse / n) ; //averge of each course is total marks of student in course divided by no. of students in that course
 cout<< subject_avg[i]<< " , " ;
 }

 } */

 

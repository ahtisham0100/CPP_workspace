/* #include<iostream>
using namespace std;

const int MAX_STUDENTS = 5;
const int MAX_SUBJECTS = 3;

void inputMarks(int marks[MAX_STUDENTS][MAX_SUBJECTS]);
void classifyGrades(int marks[MAX_STUDENTS][MAX_SUBJECTS]);
void calculateAverages(int marks[MAX_STUDENTS][MAX_SUBJECTS]);
void displayResults(int marks[MAX_STUDENTS][MAX_SUBJECTS]);

int main() {
    int marks[MAX_STUDENTS][MAX_SUBJECTS];

    // Task 1: Input marks
    inputMarks(marks);

    // Task 2: Classify grades
    classifyGrades(marks);

    // Task 3: Calculate averages
    calculateAverages(marks);

    // Task 4: Display results
    displayResults(marks);

    return 0;
}

void inputMarks(int marks[MAX_STUDENTS][MAX_SUBJECTS]) {
    cout << "Enter marks for each student and subject (out of 100):" << endl;
    for (int i = 0; i < MAX_STUDENTS; ++i) {
        cout << "Student " << i + 1 << ":" << endl;
        for (int j = 0; j < MAX_SUBJECTS; ++j) {
            do {
                cout << "Subject " << j + 1 << ": ";
                cin >> marks[i][j];
                if (marks[i][j] < 0 || marks[i][j] > 100) {
                    cout << "Invalid input! Marks must be between 0 and 100." << endl;
                }
            } while (marks[i][j] < 0 || marks[i][j] > 100);
        }
    }
}

void classifyGrades(int marks[MAX_STUDENTS][MAX_SUBJECTS]) {
    // Task 3: Classify grades based on a simple grading scale
    cout << "Classifying grades..." << endl;
    for (int i = 0; i < MAX_STUDENTS; ++i) {
        for (int j = 0; j < MAX_SUBJECTS; ++j) {
            if (marks[i][j] >= 90) {
                cout << "Student " << i + 1 << ", Subject " << j + 1 << ": A" << endl;
            } else if (marks[i][j] >= 80) {
                cout << "Student " << i + 1 << ", Subject " << j + 1 << ": B" << endl;
            } else if (marks[i][j] >= 70) {
                cout << "Student " << i + 1 << ", Subject " << j + 1 << ": C" << endl;
            } else {
                cout << "Student " << i + 1 << ", Subject " << j + 1 << ": F" << endl;
            }
        }
    }
}

void calculateAverages(int marks[MAX_STUDENTS][MAX_SUBJECTS]) {
    // Task 4: Calculate average grade for each student and each subject
    int studentTotal[MAX_STUDENTS] = {0};
    int subjectTotal[MAX_SUBJECTS] = {0};

    for (int i = 0; i < MAX_STUDENTS; ++i) {
        for (int j = 0; j < MAX_SUBJECTS; ++j) {
            studentTotal[i] += marks[i][j];
            subjectTotal[j] += marks[i][j];
        }
    }

    for (int i = 0; i < MAX_STUDENTS; ++i) {
        cout << "Average grade for Student " << i + 1 << ": " << static_cast<double>(studentTotal[i]) / MAX_SUBJECTS << endl;
    }

    for (int j = 0; j < MAX_SUBJECTS; ++j) {
        cout << "Average grade for Subject " << j + 1 << ": " << static_cast<double>(subjectTotal[j]) / MAX_STUDENTS << endl;
    }
}

void displayResults(int marks[MAX_STUDENTS][MAX_SUBJECTS]) {
    // Task 5: Display student-wise and subject-wise grades along with averages
    cout << "Displaying results..." << endl;
    for (int i = 0; i < MAX_STUDENTS; ++i) {
        cout << "Student " << i + 1 << " Grades: ";
        for (int j = 0; j < MAX_SUBJECTS; ++j) {
            cout << marks[i][j] << " ";
        }
        cout << endl;
    }

    for (int j = 0; j < MAX_SUBJECTS; ++j) {
        cout << "Subject " << j + 1 << " Grades: ";
        for (int i = 0; i < MAX_STUDENTS; ++i) {
            cout << marks[i][j] << " ";
        }
        cout << endl;
    }
}
*/
#include<iostream>
const int student=5 ; const int course=3;
void subwiseave(int marks[student][course]);      //task 5 
void inputmarks(int marks[student][course]) ;     //task 1+2 ; 

using namespace std;
int main() {
int marks[student][course];
  inputmarks(marks) ;

subwiseave(marks) ;

    return 0;
} 
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
}

void subwiseave(int marks[student][course]){
    int studentavg[student] ={} ;
    int subjectavg[course]= {};
 for (int i = 0; i <student ; i++)
 {   
    int sum=0;     //evertime one iteration completes sum is again zero ;
    for (int j = 0; j < course ; j++)
    {
        sum+=marks[i][j] ;
    }
cout<<"Student " << i+1 <<" has marks " << sum  << " , average " << (sum*100)/(total_marks * course); 
sum=studentavg[i] ;
    
           if(sum>=80 ){
cout<<" subject " << j+1 << "  is \"A \" ."  <<endl ;
           }
      else
        cout<<" subject " <<  j+1 << "  is \"F\" ." <<endl;
      }
      cout<<endl;    
 }
 



}
 

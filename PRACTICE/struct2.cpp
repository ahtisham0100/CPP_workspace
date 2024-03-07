/* 
#include<iostream>
#include <string>
using namespace std;

struct result{
    string firstname , lastname ;
    int coursemarks , programmingmarks , marks ;
    char grade; 
    void printstruct(){
         cout<<"FIRST NAME: "<<firstname<< "LAST NAME :  "<<lastname << endl; 
         cout<<"course marks : " <<coursemarks<<"   programming marks : " <<programmingmarks <<endl ;
         cout<<"TOTAL MARKS : "<< marks <<endl ;
         cout<<"Grade : " << grade<<endl; 

cout<<"..............................................................................."<<endl<<endl<<endl;
} 
    } ;


int main() {
result student1, student2 ;
student1.firstname="MICHEAL " ; student1.lastname=" korila . " ;
cout<<"Enter Marks : "  ;
cin>>student1.coursemarks>>student1.programmingmarks ;
student1.marks= student1.coursemarks+student1.programmingmarks ;

int marks= student1.marks ;
if ( marks >90 )
    {student1.grade='A' ;
    }
else if (student1.marks>80) {
student1.grade= 'b' ;
cout<<student1.grade<<endl ;
        }
else{ 
    student1.grade= 'c' ;
}
                                    student2 = student1 ;
                                    student1.printstruct() ;
                                    student2.printstruct() ;

    return 0;
}   
#include<iostream>
using namespace std;
struct rectangle 
{
    int length , width;

void input(rectangle r1 ){
    cout<<"enter the lenght : " ; 
    cin>>r1.length; 
    cout<<"enter the width : " ; 
    cin>>r1.width; 
}
 int area( ){
    cout<<"area is : " ;
    return length  * width ;
 } ;
int parameter(){
    return 2*(length+width) ;
}

};

int main() {
    rectangle box1 , box2 ;

box1.length= 12 ;
box1.width  = 12; 
cout<<box1.parameter() ;
cout<<box1.area();
    return 0;
}             */


#include<iostream>
using namespace std;
void assign(int *ptr , int *arr)
{int count=0;
for (int i = 4; i >= 0; i--)
{
    arr[count] = ptr[i];
count++ ;
}
    
}
int main() {
int array1[5]= {5,4,3,2,1}  ;
int array2[5];
int * ptr1 = array1 ;
int *ptr2 = array2 ;
assign(ptr1 , ptr2) ;
for (int i = 0; i < 5; i++)
{
  cout<<array2[i]<<" " ;
}

    return 0;
}

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
   int score;
    std::cout << "Enter the student's score: ";
    std::cin >> score;

    // Determine the grade based on the score using switch statements
    char grade;

    switch (score) {
        case 85 ... 100:
            grade = 'A';
            break;
        case 72 ... 84:
            grade = 'B';
            break;
        case 60 ... 71:
            grade = 'C';
            break;
        case 50 ... 59:
            grade = 'D';
            break;
        case 0 ... 49:
            grade = 'F';
            break;
        default:
            // Invalid score
            std::cout << "Invalid Score was entered. No Grade can be generated." << std::endl;
            return 0;
    }

    // Print the generated grade
    std::cout << "The student's grade is: " << grade << std::endl;

    return 0;

}
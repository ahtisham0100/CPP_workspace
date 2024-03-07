#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the area of a square
double calculateSquareArea(double side) {
    return side * side;
}

// Function to calculate the perimeter of a square
double calculateSquarePerimeter(double side) {
    return 4 * side;
}

// Function to calculate the area of a circle
double calculateCircleArea(double radius) {
    return M_PI * radius * radius;
}

// Function to calculate the circumference of a circle
double calculateCircleCircumference(double radius) {
    return 2 * M_PI * radius;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the perimeter of a rectangle
double calculateRectanglePerimeter(double length, double width) {
    return 2 * (length + width);
}

int main() {
    char shape;
    cout << "Enter the first letter of the shape (S for square, C for circle, R for rectangle): ";
    cin >> shape;

    if (shape == 'S' || shape == 's') {
        double side;
        cout << "Enter the length of its sides in cms: ";
        cin >> side;

        double squareArea = calculateSquareArea(side);
        double squarePerimeter = calculateSquarePerimeter(side);

        cout << "Area of this square is " << squareArea << " sq.cms" << endl;
        cout << "Perimeter of this square is " << squarePerimeter << " cms" << endl;
    } else if (shape == 'C' || shape == 'c') {
        double radius;
        cout << "Enter the radius of the circle in cms: ";
        cin >> radius;

        double circleArea = calculateCircleArea(radius);
        double circleCircumference = calculateCircleCircumference(radius);

        cout << "Area of this circle is " << circleArea << " sq.cms" << endl;
        cout << "Circumference of this circle is " << circleCircumference << " cms" << endl;
    } else if (shape == 'R' || shape == 'r') {
        double length, width;
        cout << "Enter the length of the rectangle in cms: ";
        cin >> length;
        cout << "Enter the width of the rectangle in cms: ";
        cin >> width;

        double rectangleArea = calculateRectangleArea(length, width);
        double rectanglePerimeter = calculateRectanglePerimeter(length, width);

        cout << "Area of this rectangle is " << rectangleArea << " sq.cms" << endl;
        cout << "Perimeter of this rectangle is " << rectanglePerimeter << " cms" << endl;
    } else {
        cout << "Invalid input! Please enter 'S' for square, 'C' for circle, or 'R' for rectangle." << endl;
    }

    return 0;
}

/*#include<iostream>
using namespace std;
int factorial(int n ) {
if(n>1){
    return n*factorial(n-1);
}
else{
return 1 ;
}
}
int main() {
int n;
cin>>n;

    return 0;
} */

// ................................
#include <iostream>

int fib(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

// Function to generate and display Fibonacci series up to n terms
void generateFibonacci(int n) {
    std::cout << "Fibonacci Series up to " << n << " terms: ";
    for (int i = 0; i < n; ++i) {
        std::cout << fib(i) << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n;

    // Get the number of terms from the user
    std::cout << "Enter the number of terms for Fibonacci series: ";
    std::cin >> n;

    // Generate and display the Fibonacci series using recursion
    generateFibonacci(n);

    return 0;
}

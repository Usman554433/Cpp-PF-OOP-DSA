#include<iostream>
using namespace std;

// Function to print the first N numbers of the Fibonacci series
void fibonacciSeries(int n) {
    int a = 0, b = 1, c;
    cout << "0, 1, "; // The first two numbers of the Fibonacci sequence
    for(int i = 0; i < n - 2; i++) {
        c = a + b; // Compute the next Fibonacci number
        cout << c << ", ";
        // Update the variables for the next iteration
        a = b;
        b = c;
    }
}

int main() {
    int n;
    cout << "Enter N for Fibonacci Series: ";
    cin >> n;
    fibonacciSeries(n); // Call the function to print the Fibonacci series up to N
    return 0;
}

#include<iostream>
#include<cmath> // Include cmath library for pow function
using namespace std;

// Function to perform addition of two numbers
void Addition(int a, int b) {
    cout << "Sum is : " << a + b << endl;
}

// Function to perform multiplication of two numbers
void Multiplication(int a, int b) {
    cout << "The Product is : " << a * b << endl;
}

// Function to calculate square of a number
void Square(int a) {
    cout << "Square is : " << pow(a, 2) << endl; // Using pow function to calculate square
}

// Function to print table of a number
void Table(int a) {
    cout << "Table of : " << a << endl;
    int m;
    for (int i = 1; i <= a; i++) {
        m = a * i;
        cout << m << endl;
    }
}

int main() {
    int a = 10, b = -17;

    // Calling functions to perform operations
    Addition(a, b);
    Multiplication(a, b);
    Table(a);
    Square(a);

    return 0; // Program ends here
}

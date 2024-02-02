#include<iostream>
using namespace std;

int main()
{
    // Declare variables to store the two numbers and the result
    int a, b, x;

    // Prompt user to enter the first number
    cout << "Enter Num1: ";
    cin >> a;

    // Prompt user to enter the second number
    cout << "Enter Num2: ";
    cin >> b;

    // Perform division without typecasting
    x = a / b;

    // Output the result of the division
    cout << "The result is: " << x << endl;

    return 0;
}

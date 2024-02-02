#include<iostream>
using namespace std;

int main()
{
    // Implicit type conversion
    double a;
    int b;

    // Prompt user to enter a number with a decimal
    cout << "Enter A Number With Decimal: ";
    cin >> a;

    // Implicitly convert double to int
    b = a;

    // Assign the integer value back to the double variable (implicit conversion)
    a = b;

    // Output the converted number
    cout << "Now Your Number is converted to Integer Type: " << a << endl;

    // Explicit type conversion
    double c;

    // Prompt user to enter a number with a decimal
    cout << "Enter A Number With Decimal: ";
    cin >> c;

    // Explicitly convert double to int using type casting
    cout << "Now Your Number is converted to Integer Type: " << int(c) << endl;

    return 0;
}

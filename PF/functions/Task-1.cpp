#include<iostream>
using namespace std;

int main() {
    int number, factorial = 1;

    // Prompt the user to enter a number
    cout << "Enter a number to calculate its factorial: ";
    cin >> number;

    // Calculate the factorial of the number
    for (int i = 1; i <= number; ++i) {
        factorial *= i;
    }

    // Display the factorial
    cout << "Factorial of " << number << " is: " << factorial << endl;

    return 0; // Program ends here
}

#include <iostream>
using namespace std;

int main() {
    int number, reversedNumber = 0;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    int originalNumber = number; // Store the original number for comparison later

    // Reverse the number
    for (int tempNumber = number; tempNumber != 0; tempNumber /= 10) {
        int digit = tempNumber % 10; // Extract the last digit
        reversedNumber = reversedNumber * 10 + digit; // Append the digit to the reversed number
    }

    // Check if the original number is equal to its reversed version
    if (reversedNumber == originalNumber) {
        cout << originalNumber << " is a Palindrome Number" << endl;
    } else {
        cout << originalNumber << " is NOT a Palindrome Number" << endl;
    }

    return 0; // Program ends here
}

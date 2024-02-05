#include<iostream>
using namespace std;

// Function to calculate the sum of digits
void digitSum(int num) {
    int sum = 0, digit;

    // Loop through each digit of the number
    while (num > 0) {
        digit = num % 10;   // Extract the last digit
        sum += digit;       // Add the digit to the sum
        num /= 10;          // Remove the last digit
    }

    // Display the sum of digits
    cout << "The sum of digits is: " << sum << endl;
}

int main() {
    int number;

    // Prompt the user to enter a number
    cout << "Enter a number to get the sum of its digits: ";
    cin >> number;

    // Call the function to calculate the sum of digits
    digitSum(number);

    return 0; // Program ends here
}

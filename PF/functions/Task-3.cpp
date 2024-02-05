#include<iostream>
using namespace std;

// Function to calculate the sum of digits until a single digit is obtained
int i_am_joking(int num) {
    int sum = 0, digit, sum2 = 0;

    // Calculate the sum of digits of the input number
    while (num != 0) {
        digit = num % 10;   // Extract the last digit
        sum += digit;       // Add the digit to the sum
        num /= 10;          // Remove the last digit
    }

    // Keep taking the sum of digits until a single digit is obtained
    while (sum >= 10) {
        sum2 = 0;
        // Calculate the sum of digits of the current sum
        while (sum != 0) {
            digit = sum % 10;   // Extract the last digit
            sum2 += digit;      // Add the digit to the sum
            sum /= 10;          // Remove the last digit
        }
        sum = sum2; // Update sum for the next iteration
    }

    // Return the last single digit obtained
    return sum;
}

int main() {
    int number;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    // Call the function to calculate the last single digit
    int lastDigit = i_am_joking(number);

    // Display the last single digit obtained
    cout << "The last single digit obtained: " << lastDigit << endl;

    return 0; // Program ends here
}

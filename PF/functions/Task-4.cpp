#include<iostream>
using namespace std;

// Function to count and display the number of digits in an integer
void digits(int n) {
    int digitCount = 0; // Initialize the digit count to 0

    // Loop until the number becomes 0
    while (n != 0) {
        n /= 10; // Remove the last digit from the number
        digitCount++; // Increment the digit count for each removed digit
    }

    // Display the number of digits
    cout << "The number of digits are: " << digitCount << endl;
}

int main() {
    int number;

    // Prompt the user to enter a number
    cout << "Enter a number to get the number of its digits: ";
    cin >> number;

    // Call the function to count and display the number of digits
    digits(number);

    return 0; // Program ends here
}

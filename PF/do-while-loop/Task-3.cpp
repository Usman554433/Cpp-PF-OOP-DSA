#include<iostream>
using namespace std;

int main() {
    int n, sum = 0, digit;

    // Prompt the user to enter a number
    cout << "Enter a Number: ";
    cin >> n;

    // Loop to find the sum of the digits of the number
    do {
        // Extract the last digit of the number
        digit = n % 10;

        // Add the digit to the sum
        sum = sum + digit;

        // Remove the last digit from the number
        n = n / 10;

    // Continue the loop until all digits are processed
    } while (n > 0);

    // Display the sum of the digits
    cout << "Sum is : " << sum << endl;

    return 0; // Program ends here, so the code below is unreachable

    // The following line is unreachable, as the program has already ended.
    // Keeping it may confuse the reader as it suggests that the system will pause.
    // system("pause");
}

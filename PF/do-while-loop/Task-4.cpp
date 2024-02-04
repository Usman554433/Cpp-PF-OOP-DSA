#include<iostream>
using namespace std;

int main() {
    int evenSum = 0, oddSum = 0; // Variables to store the sum of even and odd numbers
    int n, i = 1; // Initialize variables n as input from user and i as the loop counter starting from 1

    // Prompt the user to enter a number
    cout << "Enter the value of num: ";
    cin >> n;

    // Loop to find the sum of odd and even numbers from 1 to n
    while (i <= n) {
        if (i % 2 == 0) { // If the number is even
            evenSum += i; // Add the even number to the sum of even numbers
        } else { // If the number is odd
            oddSum += i; // Add the odd number to the sum of odd numbers
        }
        i++; // Increment the loop counter
    }

    // Display the sum of all even and odd numbers
    cout << "Sum of all odd numbers = " << oddSum << endl;
    cout << "Sum of all even numbers = " << evenSum << endl;

    return 0; // Program ends here, so the code below is unreachable
}

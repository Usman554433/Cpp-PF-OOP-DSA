#include<iostream>
using namespace std;

int main() {
    int n1, n2, i = 1, sum1 = 0, sum2 = 0; // Declare variables for the two numbers, loop counter, and sum of divisors

    // Prompt the user to enter two numbers
    cout << "Enter Two Numbers: ";
    cin >> n1 >> n2;

    // Loop to calculate the sum of divisors for the first number
    while (i < n1) {
        if (n1 % i == 0) { // Check if i is a divisor of n1
            sum1 += i; // Add i to the sum of divisors for n1
        }
        i++;
    }

    i = 1; // Reset loop counter for the second number

    // Loop to calculate the sum of divisors for the second number
    while (i < n2) {
        if (n2 % i == 0) { // Check if i is a divisor of n2
            sum2 += i; // Add i to the sum of divisors for n2
        }
        i++;
    }

    // Check if the numbers are amicable
    if (sum1 == n2 && sum2 == n1) {
        cout << "The Two Numbers are Amicable!" << endl;
    } else {
        cout << "The Numbers are Not Amicable!" << endl;
    }

    return 0; // Program ends here, so the code below is unreachable
}

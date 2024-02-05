#include<iostream>
using namespace std;

// Function to check if a number is prime
bool IsPrime(int number) {
    // Prime numbers have only 2 factors: 1 and the number itself
    // We count the number of factors of the given number
    int factors = 0;
    for(int i = 1; i <= number; i++) {
        if (number % i == 0) {
            factors++;
        }
    }
    // If the number has exactly 2 factors (1 and itself), it's prime
    // Return true, otherwise return false
    return factors == 2;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Check if the given number is prime using the IsPrime function
    if (IsPrime(num)) {
        cout << "Yes it is Prime" << endl;
    } else {
        cout << "No it is not Prime" << endl;
    }

    return 0;
}

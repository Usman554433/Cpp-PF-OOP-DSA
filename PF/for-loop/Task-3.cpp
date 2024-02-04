#include<iostream>
using namespace std;

int main() {
    int term1 = 1, term2 = 1, nextTerm = 0, num;

    cout << "Enter the number of terms: ";
    cin >> num;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= num; ++i) {
        if (i == 1 || i == 2) {
            cout << term1 << ", "; // Print the first two terms
            continue;
        }
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;

        cout << nextTerm << ", "; // Print the next term
    }

    return 0;
}

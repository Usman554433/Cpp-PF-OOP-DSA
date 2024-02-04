#include<iostream>
using namespace std;

int main() {
    int i = 4; // Starting value

    // Loop to print 4, 4 times
    while (i >= 1) {
        int j = 0;
        while (j < i) {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i--; // Decrement the value for the next line
    }

    // System pause command to keep the output window open
    system("pause");
    return 0;
}

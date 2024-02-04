#include<iostream>
using namespace std;

int main() {
    char state; // Variable to store the state of the telephone line

    do {
        // Prompt the user to enter the state of the telephone line
        cout << "Press 'w' for working state and 'd' for dead state" << endl;
        cout << "Enter the state of your phone: ";
        cin >> state;

        // Check if the input is invalid
        if (state != 'w' && state != 'd') {
            cout << "Invalid input! Please enter 'w' for working or 'd' for dead state." << endl;
        }
    } while (state != 'w' && state != 'd'); // Continue looping until a valid input is received

    // Display the state of the telephone line
    if (state == 'w') {
        cout << "Noted, your phone is in working state." << endl;
    } else if (state == 'd') {
        cout << "Noted, your phone is in dead state." << endl;
    }

    return 0;
}

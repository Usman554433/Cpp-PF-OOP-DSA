#include<iostream>
using namespace std;

int main()
{
    // Declare variable to store marks obtained
    int marks;

    // Prompt user to enter marks
    cout << "Please Enter Your Marks: ";
    cin >> marks;

    // Determine the grade based on the marks entered by the user
    if (marks >= 90 && marks <= 100) {
        cout << "Congrats! You got an A+!" << endl;
    }
    else if (marks >= 80 && marks <= 89) {
        cout << "Congrats! You got an A!" << endl;
    }
    else if (marks >= 70 && marks <= 79) {
        cout << "Congrats! You got a B!" << endl;
    }
    else if (marks >= 60 && marks <= 69) {
        cout << "Congrats! You got a C!" << endl;
    }
    else if (marks >= 50 && marks <= 59) {
        cout << "Congrats! You got a D!" << endl;
    }
    else if (marks >= 0 && marks <= 49) {
        cout << "Congrats! You got an F!" << endl;
        cout << "WELCOME TO FAST NUCES! :)" << endl;
    }

    return 0;
}

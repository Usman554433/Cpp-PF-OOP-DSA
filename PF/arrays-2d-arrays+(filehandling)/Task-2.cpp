#include<iostream>
using namespace std;

// Function to calculate the grade based on the marks
void calculateGrade(int marks, char &grade) {
    if (marks >= 80 && marks <= 100) {
        grade = 'A';
    } else if (marks >= 65 && marks < 80) {
        grade = 'B';
    } else if (marks >= 50 && marks < 65) {
        grade = 'C';
    } else if (marks < 50 && marks >= 0) {
        grade = 'F';
    } else {
        // Handling invalid marks
        cout << "Invalid marks! Marks should be between 0 and 100." << endl;
        grade = ' ';
    }
}

int main() {
    int marks;
    char grade;
    do {
        cout << "Enter Marks (-1 to exit): ";
        cin >> marks;
        if (marks == -1) {
            break; // Exit loop if user enters -1
        }
        calculateGrade(marks, grade); // Calculate grade
        cout << "Grade is: " << grade << endl;
    } while (true);

    return 0;
}

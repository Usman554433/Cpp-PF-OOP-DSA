#include<iostream>
using namespace std;

// Function to print the upper half of the matrix
void Upperhalf(int a[][20], int s);

int main() {
    int a[20][20], size;

    // Input the size of the matrix
    cout << "Enter Size Of Matrix: ";
    cin >> size;

    // Input elements of the matrix
    cout << "Enter Elements of Matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> a[i][j];
        }
    }

    // Call the function to print the upper half of the matrix
    Upperhalf(a, size);
    return 0;
}

void Upperhalf(int a[][20], int s) {
    // Loop through each element of the matrix
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            // If the row index is less than or equal to the column index, print the element
            // Otherwise, print a space to maintain the upper half structure
            if (i <= j) {
                cout << a[i][j] << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl; // Move to the next row after printing all elements of the current row
    }
}

#include<iostream>
using namespace std;

int main() {
    int s;
    int a[20][20];

    // Input size of the matrix
    cout << "Enter size of matrix (size = rows and columns): ";
    cin >> s;

    // Input elements of the matrix
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < s; i++) {
        for(int j = 0; j < s; j++) {
            cin >> a[i][j];
        }
    }

    // Display the matrix
    cout << "Matrix entered:" << endl;
    for (int i = 0; i < s; i++) {
        for(int j = 0; j < s; j++) {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }

    int c = 0, z = 0;

    // Check if the matrix is an identity matrix
    for (int i = 0; i < s; i++) {
        for(int j = 0; j < s; j++) {
            if (i == j) {
                // Check if diagonal entries are 1
                if (a[i][j] == 1) {
                    c++;
                }
            } else {
                // Check if non-diagonal entries are 0
                if (a[i][j] == 0) {
                    z++;
                }
            }
        }
    }

    // Check if the matrix is an identity matrix based on counts
    if (c == s && z == s * (s - 1)) {
        cout << "THIS IS AN IDENTITY MATRIX!" << endl;
    } else {
        cout << "THIS IS NOT AN IDENTITY MATRIX!" << endl;
    }

    return 0;
}

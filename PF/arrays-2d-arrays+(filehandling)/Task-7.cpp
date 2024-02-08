#include<iostream>
using namespace std;

int main() {
    int a[20][20], b[20][20], sum[20][20], sub[20][20];
    int order1, order2;

    // Input orders for matrices
    cout << "Enter Order For Matrix 1: ";
    cin >> order1;
    cout << "Enter Order For Matrix 2: ";
    cin >> order2;

    // Check if orders are the same for addition/subtraction
    if (order1 == order2) {
        cout << "Enter Values For First Matrix:" << endl;
        // Input values for first matrix
        for(int i = 0; i < order1; i++) {
            for(int j = 0; j < order1; j++) {
                cin >> a[i][j];
            }
        }

        cout << "Enter Values For Second Matrix:" << endl;
        // Input values for second matrix
        for(int i = 0; i < order2; i++) {
            for(int j = 0; j < order2; j++) {
                cin >> b[i][j];
            }
        }

        // Perform addition and subtraction
        for(int i = 0; i < order2; i++) {
            for(int j = 0; j < order2; j++) {
                sum[i][j] = a[i][j] + b[i][j];
                sub[i][j] = a[i][j] - b[i][j];
            }
        }

        // Display addition result
        cout << "ADDITION IS:" << endl;
        for (int i = 0; i < order1; i++) {
            for(int j = 0; j < order1; j++) {
                cout << sum[i][j] << "  ";
            }
            cout << endl;
        }

        // Display subtraction result
        cout << "SUBRACTION IS:" << endl;
        for (int i = 0; i < order1; i++) {
            for(int j = 0; j < order1; j++) {
                cout << sub[i][j] << "  ";
            }
            cout << endl;
        }
    } else {
        cout << "Orders are not the same! Cannot add/subtract!" << endl;
    }

    return 0;
}

#include<iostream>
using namespace std;

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

cout<<"Your Matrix: "<<endl;
for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout<< a[i][j]<<" ";
        }
        cout<<endl;
    }


    // Display middle row
    cout << "MIDDLE ROW: " << endl;
    for (int j = 0; j < size; j++) {
        cout << a[(size - 1) / 2][j] << " ";
    }
    cout << endl;

    // Display middle column
    cout << "MIDDLE COL: " << endl;
    for (int i = 0; i < size; i++) {
        cout << a[i][(size - 1) / 2] << endl;
    }

    return 0;
}

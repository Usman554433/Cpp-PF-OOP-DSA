#include<iostream>
using namespace std;

int main() {
    int height;
    cout << "Enter Height Of Square: ";
    cin >> height;

    // Filled Square
    cout << "Filled Square of Height " << height << endl;
    for(int i = 0; i < height; i++) {
        for(int j = 0; j < height; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Hollow Square
    cout << "Hollow Square of Height " << height << endl;
    for(int i = 0; i < height; i++) {
        for(int j = 0; j < height; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == height - 1) {
                cout << "* ";
            } else {
                cout << "  "; // Print spaces for the hollow part
            }
        }
        cout << endl;
    }

    return 0;
}

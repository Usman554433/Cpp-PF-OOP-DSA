#include<iostream>
using namespace std;

// Function to sort the array in ascending order
void Asc(int a[], int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Print the array in ascending order
    for (int b = 0; b < size; b++) {
        cout << a[b] << endl;
    }
}

// Function to sort the array in descending order
void Dsc(int a[], int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Print the array in descending order
    for (int b = 0; b < size; b++) {
        cout << a[b] << endl;
    }
}

int main() {
    int arr[4];
    char s;

    // Input 4 elements into the array
    cout << "Enter 4 Elements in the array: " << endl;
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    // Prompt the user for sorting option
    cout << "Enter from the following options: " << endl;
    cout << "'A' for Ascending Order " << endl;
    cout << "'D' for Descending Order " << endl;
    cout << "'N' for No Modification " << endl;
    cin >> s;

    // Perform sorting or print the array based on user's choice
    if (s == 'A' || s == 'a') {
        Asc(arr, 4); // Call Ascending order function
    } else if (s == 'D' || s == 'd') {
        Dsc(arr, 4); // Call Descending order function
    } else if (s == 'N' || s == 'n') {
        for (int b = 0; b < 4; b++) {
            cout << arr[b] << endl; // Print the array as it is
        }
    }

    // Pause the system to view output
    system("pause");
    return 0;
}

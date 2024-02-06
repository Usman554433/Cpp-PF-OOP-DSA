#include<iostream>
using namespace std;

// Function to reverse the elements of the array
void resverse_Array(int a[], int size) {
    int temp = 0;
    for(int i = 0; i < size / 2; i++) {
        temp = a[i];
        a[i] = a[size - 1 - i];
        a[size - 1 - i] = temp;
    }
}

int main() {
    int a[] = {4, 5, 2, 1, 9};
    cout << "Before reversing: " << endl;
    for(int i = 0; i < 5; i++) {
        cout << a[i] << endl;
    }
    
    resverse_Array(a, 5); // Call the function to reverse the array
    
    cout << "After reversing: " << endl;
    for(int i = 0; i < 5; i++) {
        cout << a[i] << endl;
    }
    return 0;
}

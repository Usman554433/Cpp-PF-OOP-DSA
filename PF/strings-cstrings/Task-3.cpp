#include<iostream>
using namespace std;

int main() {
    char s[100];
    char j[100];
    int a = 0;

    cout << "Enter a string: ";
    cin.getline(s, 100); // Allowing spaces in input string

    // Loop through the input string to filter out non-alphabetic characters
    for(int i = 0; s[i] != '\0'; i++) {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            j[a] = s[i]; // Store alphabetic characters in another array
            a++;
        }
    }

    cout << "Filtered String is: ";
    // Output the filtered string
    for(int k = 0; k < a; k++) {
        cout << j[k];
    }
    cout << endl;

    return 0;
}

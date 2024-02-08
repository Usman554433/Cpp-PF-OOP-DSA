#include<iostream>
#include<cctype> // Include cctype for character handling functions
using namespace std;

// Function to convert string to snake_case
void SnakeCase(char s[]) {
    cout << "Snake Case is: ";
    for(int i = 0; s[i] != '\0'; i++) {
        // Check if current character is uppercase
        if(isupper(s[i])) {
            // Convert uppercase to lowercase and insert underscore
            cout << "_" << char(tolower(s[i]));
        } else {
            cout << s[i];
        }
    }
    cout << endl;
}

// Function to convert string to camelCase
void CamelCase(char s[]) {
    cout << "Camel Case is: ";
    bool underScore = false; // Flag to track underscore
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == '_') {
            underScore = true;
            continue; // Skip underscore character
        }
        if(underScore && islower(s[i])) {
            // Convert lowercase character to uppercase if preceded by underscore
            cout << char(toupper(s[i]));
            underScore = false;
        } else {
            cout << s[i];
        }
    }
    cout << endl;
}

int main() {
    char s[100];
    cout << "Enter Word Without Spaces!: ";
    cin >> s; // Read the word

    // Call the functions to convert the word
    CamelCase(s);
    SnakeCase(s);

    return 0;
}

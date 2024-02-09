#include <iostream>
using namespace std;

// Function to find the length of a string
int strlength(char A[]) {
    int c;
    // Loop until null character is encountered
    for (c = 0; A[c] != '\0'; c++);
    return c;
}

// Function to find the index of a character in a string
int indexOf(char A[], char c) {
    // Loop through the string
    for (int i = 0; A[i] != '\0'; i++) {
        if (A[i] == c) {
            return i; // Return the index if character is found
        }
    }
    return -1; // Return -1 if character is not found
}

// Function to find all occurrences of a character in a string
void allIndicesOf(char A[], char c, int occurrences[], int &occSize) {
    occSize = 0;
    // Loop through the string
    for (int i = 0; A[i] != '\0'; i++) {
        if (A[i] == c) {
            occurrences[occSize] = i;
            occSize++; // Increment occurrence count and store the index
        }
    }
}

// Function to remove the first occurrence of a character in a string
void removeFirstCharacter(char A[], char c) {
    // Find the index of the character
    int index = indexOf(A, c);
    if (index != -1) {
        // Shift characters to the left starting from the index
        for (int j = index; A[j] != '\0'; j++) {
            A[j] = A[j + 1];
        }
    }
}

// Function to remove the last occurrence of a character in a string
void removeLastCharacter(char A[], char c) {
    // Find the length of the string
    int size = strlength(A);
    // Iterate backwards to find the last occurrence of the character
    for (int i = size - 1; i >= 0; i--) {
        if (A[i] == c) {
            // Shift characters to the left starting from the index
            for (int j = i; A[j] != '\0'; j++) {
                A[j] = A[j + 1];
            }
            break; // Break after the last occurrence is removed
        }
    }
}

// Function to remove all occurrences of a character in a string
void removeAllCharacters(char A[], char c) {
    // Iterate through the string
    for (int i = 0; A[i] != '\0'; i++) {
        if (A[i] == c) {
            // Shift characters to the left starting from the index
            for (int j = i; A[j] != '\0'; j++) {
                A[j] = A[j + 1];
            }
            i--; // Decrement i to handle consecutive occurrences
        }
    }
}

// Function to compare two strings lexicographically
int compare(char A[], char B[]) {
    // Iterate through both strings
    for (int i = 0; A[i] != '\0' && B[i] != '\0'; i++) {
        if (A[i] < B[i]) {
            return -1; // A appears first
        } else if (A[i] > B[i]) {
            return 1; // B appears first
        }
    }
    if (strlength(A) < strlength(B)) {
        return -1; // A appears first
    } else if (strlength(A) > strlength(B)) {
        return 1; // B appears first
    }
    return 0; // Strings are equal
}

// Function to reverse a portion of a string within given indices
void reverse(char A[], int si, int ei) {
    // Reverse the string within the given range
    while (si < ei) {
        // Swap characters at si and ei indices
        char temp = A[si];
        A[si] = A[ei];
        A[ei] = temp;
        si++; // Increment start index
        ei--; // Decrement end index
    }
}

int main() {
    char A[20];
    char c;
    int choice;
    int occurrences[20];
    int occSize;

    cout << "Enter characters: ";
    cin.get(A, 20);
    cin.ignore(); // Ignore newline character in buffer

    cout << "Enter your choice:\n";
    cout << "1. Find string length\n2. Find first index of a character\n3. Find all indexes of a character\n";
    cout << "4. Remove first instance of character\n5. Remove last instance of character\n";
    cout << "6. Remove all instances of character\n7. Compare two arrays\n8. Reverse a portion of the string\n";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Length of char array is " << strlength(A) << endl;
            break;
        case 2:
            cout << "Enter character to find first index: ";
            cin >> c;
            cout << "First index of character is " << indexOf(A, c) << endl;
            break;
        case 3:
            cout << "Enter character to find all indexes: ";
            cin >> c;
            allIndicesOf(A, c, occurrences, occSize);
            cout << "Indexes are: ";
            for (int i = 0; i < occSize; i++) {
                cout << occurrences[i] << " ";
            }
            cout << endl;
            break;
        case 4:
            cout << "Enter character to remove first instance: ";
            cin >> c;
            removeFirstCharacter(A, c);
            cout << "String after removing first character: " << A << endl;
            break;
        case 5:
            cout << "Enter character to remove last instance: ";
            cin >> c;
            removeLastCharacter(A, c);
            cout << "String after removing last character: " << A << endl;
            break;
        case 6:
            cout << "Enter character to remove all instances: ";
            cin >> c;
            removeAllCharacters(A, c);
            cout << "String after removing all instances: " << A << endl;
            break;
        case 7:
            char B[20];
            cout << "Enter second string: ";
            cin.ignore();
            cin.get(B, 20);
            switch (compare(A, B)) {
                case -1:
                    cout << "First string appears first in dictionary order" << endl;
                    break;
                case 0:
                    cout << "Strings are exactly the same" << endl;
                    break;
                case 1:
                    cout << "First string comes later in dictionary order than the second string" << endl;
                    break;
            }
            break;
        case 8:
            int start, end;
            cout << "Enter starting index: ";
            cin >> start;
            cout << "Enter ending index: ";
            cin >> end;
            reverse(A, start, end);
            cout << "Reversed string: " << A << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
    return 0;
}

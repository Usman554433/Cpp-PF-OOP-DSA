#include<iostream>
using namespace std;

// Function to calculate the frequency of a character in a string
int charFrequency(const char *s, char letter) {
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == letter) {
            count++;
        }
    }
    return count;
}

int main() {
    char s[100];
    char letter;
    cout << "Enter a String: ";
    cin.getline(s, 100); // Read a string with spaces

    cout << "Enter the Letter to Find: ";
    cin >> letter;

    // Call the function to get the frequency of the letter
    int frequency = charFrequency(s, letter);

    cout << "The letter " << letter << " occurred " << frequency << " times in your string." << endl;

    return 0;
}

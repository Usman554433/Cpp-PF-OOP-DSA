#include<iostream>
using namespace std;

void tweakLetters(char word[], int a[]) {
    // Iterate to find the length of the word
    int i;
    for(i = 0; word[i] != '\0'; i++) {}

    cout << "Enter Numbers to tweak words: " << endl;
    // Read tweak numbers
    for(int j = 0; j < i; j++) {
        cin >> a[j];
    }

    // Tweak the letters according to the tweak numbers
    for(int b = 0; b < i; b++) {
        word[b] = word[b] + a[b];
    }

    // Output the tweaked word
    cout << "New Word Is: " << word << endl;
}

int main() {
    char word[100];
    int a[100];

    cout << "Enter Words: ";
    cin.get(word, 100); // Read the word

    // Call the function to tweak the letters
    tweakLetters(word, a);

    return 0;
}

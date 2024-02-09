#include<iostream>
using namespace std;

int main()
{
    int i;
    int *ptrI, *ptrVowel, *ptrConsonant;
    int vowel = 0; 
    int consonant = 0;
    char Str[20];
    
    // Prompt the user to enter a string of max 20 size
    cout << "Enter a String of Max 20 Size: ";
    cin.getline(Str, 20);
    
    // Loop through the string to count vowels and consonants
    for (i = 0; Str[i] != '\0'; i++)
    {
        if (Str[i] == 'a' || Str[i] == 'A' || Str[i] == 'e' || Str[i] == 'E' || Str[i] == 'i' || Str[i] == 'I' || Str[i] == 'o' || Str[i] == 'O' || Str[i] == 'u' || Str[i] == 'U')
        {
            vowel++;
        }
        else if ((Str[i] >= 'a' && Str[i] <= 'z') || (Str[i] >= 'A' && Str[i] <= 'Z'))
        {
            consonant++;
        }
    }
    
    // Assign addresses of variables to pointers
    ptrI = &i;
    ptrVowel = &vowel;
    ptrConsonant = &consonant;

    // Display the length of the string, count of vowels, and count of consonants using pointers
    cout << "String Length: " << *ptrI << endl;
    cout << "Vowel Count: " << *ptrVowel << endl;
    cout << "Consonant Count: " << *ptrConsonant << endl;
    
    // System pause to keep the console window open (Windows-specific)
    system("pause");
    
    return 0;
}

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    char line[15][10]; // Assuming a maximum of 15 words of length 10
    ifstream file;
    file.open("dictionary.txt");
    
    // Check if the file is found and read the dictionary
    if (file)
    {
        cout << "File Found!" << endl;
        int i = 0;
        while (!file.eof() && i < 15)
        {
            file.getline(line[i], 10); // Read words from the dictionary file
            i++;
        }
        file.close(); // Close the file after reading
    }
    else
    {
        cout << "File Not Found!" << endl;
        return 1; // Exit the program if the file is not found
    }

    string search;
    cout << "Please enter a word: ";
    cin >> search;
    bool isFound = false;
    
    // Check if the entered word is in the dictionary
    for (int i = 0; i < 15; i++)
    {
        string temp = line[i]; // Convert the char array to a string
        if (temp == search)
        {
            cout << "You Spelled correctly!: " << search << endl;
            isFound = true;
            break;
        }
    }

    // If the word is not found, suggest possible corrections
    if (!isFound)
    {
        cout << "Word isn't spelled correctly." << endl;
        cout << "Did you mean: ";
        for (int i = 0; i < 15; i++)
        {
            string temp = line[i];
            if (temp.find(search) != string::npos)
            {
                cout << temp << "? ";
            }
        }
        cout << endl;

        char choice;
        cout << "Do you want to add '" << search << "' to your dictionary? (y/n): ";
        cin >> choice;
        
        // If user wants to add the word, append it to the dictionary file
        if (choice == 'y' || choice == 'Y')
        {
            ofstream outFile;
            outFile.open("dictionary.txt", ios::app); // Open file in append mode
            outFile << endl << search; // Append the word to the end of the file
            outFile.close(); // Close the file after appending
            cout << "Word added to the dictionary." << endl;
        }
        else
        {
            cout << "Word not added to the dictionary." << endl;
        }
    }

    return 0;
}

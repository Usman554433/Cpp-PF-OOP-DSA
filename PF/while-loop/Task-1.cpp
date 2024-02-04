#include<iostream>
using namespace std;

int main(){
    // Initialize variable 'a' to hold the ASCII value of 'A'
    int a = 65;
    
    // Display alphabets from A to Z using a while loop
    while(a <= 90)
    {
        // Output the current character corresponding to the ASCII value
        cout << " <> " << char(a) << " <> " << endl;
        
        // Increment the ASCII value to move to the next character
        a++;
    }

    // System pause command to keep the output window open
    system("pause");
    
    return 0;
}

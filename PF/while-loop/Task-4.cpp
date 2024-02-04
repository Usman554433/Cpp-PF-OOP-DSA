#include<iostream>
using namespace std;

int main()
{
    // Initialize loop counter
    int i = 1;
    
    // Print all odd positive numbers less than 100, skipping those divisible by 7
    while(i < 100)
    {
        // Check if the current number is not divisible by 7
        if (i % 7 != 0)
        {
            // Output the current number if it's not divisible by 7
            cout << i << endl;
        }
        
        // Increment the loop counter by 2 to maintain odd numbers
        i = i + 2;  
    }

    // System pause command to keep the output window open
    system("pause");
    
    return 0;
}

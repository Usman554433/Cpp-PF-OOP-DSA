#include<iostream>
using namespace std;

int main()
{
    // Declare variables to store loop counter, result, and user input
    int i = 1;
    int result = 1;
    int number;
    
    // Prompt user to enter a number to get its table
    cout << "Enter a number to get its Table: ";
    cin >> number;
    
    // Display the table of the entered number using a while loop
    cout << "TABLE OF " << number << " :" << endl;
    while(i <= 10)
    {
        // Calculate the result (table value) for each iteration
        result = number * i;
        
        // Output the result (table value)
        cout <<number<<" x "<<i<<" = "<< result << endl;
        
        // Increment the loop counter
        i++;
    }

    // System pause command to keep the output window open
    system("pause");
    
    return 0;
}

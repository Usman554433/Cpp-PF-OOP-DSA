#include<iostream>
using namespace std;

int main()
{
    int n, nx; // Declare variables to store the original number and a copy
    int size = 0; // Initialize size variable to store the number of digits
    int check = 0; // Initialize check variable to count matching digits
    int *ptrN; // Declare pointer to store individual digits of the number

    cout << "Enter a Number: "; 
    cin >> n; // Input the number from the user
    nx = n; // Make a copy of the original number
    ptrN = &n; // Assign the address of 'n' to the pointer

    // Count the number of digits in the input number
    while (nx != 0)
    {
        nx = nx / 10; // Remove the last digit
        size++; // Increment the size counter
    }

    // Dynamically allocate memory for the pointer to store individual digits
    ptrN = new int[size];

    // Store individual digits of the number in the dynamically allocated memory
    for (int i = 0; i < size; i++)
    {
        ptrN[i] = n % 10; // Extract the last digit
        n = n / 10; // Remove the last digit
    }

    // Check if the number is a palindrome
    for (int i = 0; i <= size / 2; i++)
    {
        if (ptrN[i] == ptrN[size - 1 - i])
        {
            check++; // Increment the check counter if digits match
        }
    }

    // Output the result based on palindrome check
    if (check == (size / 2) + 1)
    {
        cout << "Number is Palindrome!" << endl;
    }
    else
    {
        cout << "Number is not Palindrome!" << endl;
    }

    delete[] ptrN; // Free the dynamically allocated memory

    // System pause to keep the console window open (Windows-specific)
    system("pause");

    return 0;
}

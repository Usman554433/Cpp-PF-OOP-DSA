#include<iostream>
using namespace std;

int main()
{
    int *f; // Pointer to store Fibonacci numbers
    int size; // Size of the Fibonacci series
    
    // Input the size of the Fibonacci series
    cout << "Enter Size of Fibonacci series: ";
    cin >> size;
    
    // Dynamically allocate memory for the Fibonacci series
    f = new int[size];
    
    // Initialize the first two Fibonacci numbers
    f[0] = 1;
    f[1] = 1;
    
    // Generate Fibonacci series
    for (int i = 2; i < size; i++)
    {
        f[i] = f[i - 1] + f[i - 2]; // Calculate the next Fibonacci number
    }
    
    // Output the Fibonacci series
    cout << "Fibonacci Numbers: ";
    for (int i = 0; i < size; i++)
    {
        cout << f[i] << " ";
    }
    
    // Free dynamically allocated memory
    delete[] f;
    
    return 0;
}

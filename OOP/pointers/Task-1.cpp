#include<iostream>
using namespace std;

int main()
{
    // Declare variables
    int a, b;
    int *ptrA; // Declare integer pointer ptrA
    int *ptrB; // Declare integer pointer ptrB
    
    // Prompt the user to enter values for 'a' and 'b'
    cout << "Enter Values Of a and b: ";
    cin >> a >> b;
    
    // Assign the addresses of 'a' and 'b' to ptrA and ptrB respectively
    ptrA = &a;
    ptrB = &b;
    
    // Display the values of 'a' and 'b' through their pointers
    cout << "a : " << *ptrA << " b : " << *ptrB << endl;
    
    // System pause to keep the console window open (Windows-specific)
    system("pause");
    
    return 0; 
}

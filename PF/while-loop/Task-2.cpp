#include<iostream>
using namespace std;

int main(){
    // Declare variables to store user input, factorial, and loop counter
    int number;
    int factorial = 1;
    int i = 1;
    
    // Prompt user to enter a number to calculate its factorial
    cout << "Enter a Number to Get the Factorial: ";
    cin >> number;
    
    // Calculate factorial using a while loop
    while(i <= number)
    {
        factorial = i * factorial;
        i++;
    }
    
    // Output the factorial of the entered number
    cout << number << "! = " << factorial << endl;
    
    // System pause command to keep the output window open
    system("pause");
    
    return 0;
}

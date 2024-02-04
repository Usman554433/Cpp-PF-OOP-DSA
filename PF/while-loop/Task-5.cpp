#include<iostream>
#include<cmath> // Include the <cmath> library for pow() function
using namespace std;

int main(){
    // Declare variables to store loop counter, base number, sum, and power
    int i = 1;
    int x;
    int sum = 0;
    int power;
    
    // Prompt user to enter the base number (x)
    cout << "Enter x: ";
    cin >> x;
    
    // Prompt user to enter the power of the number
    cout << "Enter The Power of Number: ";
    cin >> power;
    
    // Calculate and display the sum of the series using a while loop
    while(i <= power)
    {
        // Add the value of x raised to the power of 'i' to the sum
        sum += pow(x, i);
        
        // Increment 'i' by 1 for the first iteration and by 2 for subsequent iterations
        if (i == 1)
        {
            i++;
        }
        else
        {
            i = i + 2;
        }
    }
    
    // Output the sum of the series
    cout << "The Sum Of Series = " << sum << endl;
    
    // System pause command to keep the output window open
    system("pause");
    
    return 0;
}

#include<iostream>
using namespace std;

int main() {
    // Declare variables to store Fahrenheit and Celsius temperatures
    double celsius;
    int fahrenheit = 50;
    
    // Display table headers
    cout << "Fahrenheit\t\tCelsius" << endl;
    
    // Use a while loop to generate a table of equivalent temperatures
    while (fahrenheit <= 100) {
        // Convert Fahrenheit to Celsius using the formula (5.0/9.0)*(F-32)
        celsius = (5.0 / 9.0) * (fahrenheit - 32);
        
        // Output the Fahrenheit and corresponding Celsius temperatures in the table
        cout << fahrenheit << "\t\t\t" << celsius << endl;
        
        // Increment Fahrenheit by 5 for the next iteration
        fahrenheit = fahrenheit + 5;
    }

    // System pause command to keep the output window open
    system("pause");
    
    return 0;
}

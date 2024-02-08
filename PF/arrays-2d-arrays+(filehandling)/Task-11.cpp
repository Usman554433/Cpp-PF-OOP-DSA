#include<iostream>
using namespace std;

int main()
{
    int a[3][5];
    int max = 0, min, sum = 0;
    
    // Input data for each monkey
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter (+ve) pounds of food eaten for Monkey (Enter 5 Values) " << i + 1 << " :" << endl;
        for (int j = 0; j < 5; j++)
        {
            // Validate input for non-negative pounds of food eaten
            do
            {
                cin >> a[i][j];
            } while (a[i][j] < 0);
            
            sum += a[i][j]; // Calculate sum of all pounds of food eaten
        }
    }

    min = a[0][0]; // Set initial minimum to the first element of the array

    // Calculate minimum and maximum pounds of food eaten during the week by any monkey
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    }

    // Calculate and display the average amount of food eaten per day by the whole family of monkeys
    cout << "The average amount of food eaten per day by the whole family of monkeys: " << sum / 15 << endl;

    // Display the least amount of food eaten during the week by any one monkey
    cout << "The least amount of food eaten during the week by anyone monkey: " << min << endl;

    // Display the greatest amount of food eaten during the week by any one monkey
    cout << "The greatest amount of food eaten during the week by anyone monkey: " << max << endl;
    
    return 0;
}

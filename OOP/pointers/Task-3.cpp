#include<iostream>
using namespace std;

int main()
{
    int num, sum = 0, avg; // Declare variables to store number, sum, and average
    int *ptrNum, *ptrSum, *ptrAvg; // Declare pointers to manipulate these variables

    ptrNum = &num; // Assign the address of 'num' variable to 'ptrNum'
    ptrSum = &sum; // Assign the address of 'sum' variable to 'ptrSum'
    ptrAvg = &avg; // Assign the address of 'avg' variable to 'ptrAvg'

    cout << "Enter Five Numbers : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> *ptrNum; // Input each number from the user
        *ptrSum += *ptrNum; // Add the input number to the sum
    }

    *ptrAvg = *ptrSum / 5; // Calculate the average by dividing the sum by 5

    // Output the calculated average
    cout << "Average is : " << *ptrAvg << endl;

    // System pause to keep the console window open (Windows-specific)
    system("pause");

    return 0;
}

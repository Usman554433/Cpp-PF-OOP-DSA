#include<iostream>
#include<cmath> // Include the cmath library for pow() function
using namespace std;

// Function prototype for checking Armstrong number
bool isArmstrong(int n);

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Check if the number is Armstrong using the function
    if (isArmstrong(n)) {
        cout << "Number is Armstrong." << endl;
    } else {
        cout << "Number is not Armstrong." << endl;
    }

    system("pause");
    return 0;
}

// Function definition to check if a number is Armstrong
bool isArmstrong(int n)
{
    int nx = n;
    int sum = 0;
    int size = 0;

    // Calculate the number of digits in the input number
    while (nx != 0)
    {
        nx = nx / 10;
        size++;
    }

    // Create a dynamic array to store individual digits of the number
    int *ptrN = new int[size];

    nx = n; // Reset nx to the original number

    // Store individual digits of the number in the array
    for (int i = 0; i < size; i++)
    {
        ptrN[i] = n % 10;
        n = n / 10;
    }

    // Calculate the sum of cubes of individual digits
    for (int i = 0; i < size; i++)
    {
        sum += pow(ptrN[i], size);
    }

    delete[] ptrN; // Deallocate the memory for the dynamic array

    // Check if the sum is equal to the original number
    return sum == nx;
}

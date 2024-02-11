#include<iostream>
using namespace std;

int main()
{
    int *a; // Pointer to store the dynamic array
    int m; // Number of elements to be entered
    int Occr; // Number to find the occurrence
    int n; // Size of the array

    // Input the size of the array
    cout << "Enter Array Size n: ";
    cin >> n;
    
    // Dynamically allocate memory for the array
    a = new int[n];
    
    // Input the number of elements to be entered
    do
    {
        cout << "Enter Number of Elements you want to Enter (m < n): ";
        cin >> m;
    } while (m >= n);

    // Input elements into the array
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    // Count the occurrence of the specified number
    int count = 0;
    cout << "Please enter the number to find the occurrence: ";
    cin >> Occr;
    for (int i = 0; i < m; i++)
    {
        if (a[i] == Occr)
        {
            count++;
        }
    }

    // Create a new array to store non-free slots
    int *a2;
    a2 = new int[m];
    for (int i = 0; i < m; i++)
    {
        a2[i] = a[i];
    }

    // Free the memory allocated for the original array
    delete[] a;

    // Output the occurrence of the specified number
    cout << "Occurrence of " << Occr << " : " << count << endl;
    
    // Output the number of free slots available
    cout << "Number Of Free Slots: " << n - m << endl;

    system("pause");
    return 0;
}

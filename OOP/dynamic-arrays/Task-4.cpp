#include<iostream>
using namespace std;

int main()
{
    int *P; // Pointer to store the original array
    int *nP; // Pointer to store the new array
    int n; // Size of the original array

    // Input the size of the original array
    cout << "Enter Size n: ";
    cin >> n;

    // Dynamically allocate memory for the original array of size n-1
    P = new int[n - 1];
    // Dynamically allocate memory for the new array of size n
    nP = new int[n];

    // Print the size of the original array created
    cout << "Array of size " << n - 1 << " created" << endl;

    // Input n-1 elements in the range of 1 to n
    cout << "Enter " << n - 1 << " Elements in range 1-" << n << " : " << endl;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> P[i];
    }

    int Missing = 0;
    // Find the missing element in the original array
    for (int i = 0; i < n - 1; i++)
    {
        if (P[i + 1] == P[i] + 1)
        {
            // If the next element is consecutive, continue
        }
        else
        {
            // If the next element is not consecutive, the missing element is found
            Missing = P[i] + 1;
            break;
        }
    }

    // Output the missing element
    cout << "Missing Element: " << Missing << endl;
    cout << "New Array Elements: " << endl;

    // Store the missing element in the new array
    nP[n - 1] = Missing;

    // Copy elements from the original array to the new array
    for (int i = 0; i < n - 1; i++)
    {
        nP[i] = P[i];
    }

    // Sort the new array in ascending order
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (nP[j] > nP[j + 1])
            {
                int temp = nP[j];
                nP[j] = nP[j + 1];
                nP[j + 1] = temp;
            }
        }
    }

    // Output the elements of the new array
    for (int i = 0; i < n; i++)
    {
        cout << nP[i] << " ";
    }

    // Free dynamically allocated memory
    delete[] P;
    delete[] nP;

    system("pause");
    return 0;
}

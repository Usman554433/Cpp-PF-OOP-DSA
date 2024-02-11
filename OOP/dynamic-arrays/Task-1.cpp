#include<iostream>
using namespace std;

int main()
{
    int *arr;
    int size;
    
    // Input size of the dynamic array
    cout << "Enter Size of Dynamic Array: ";
    cin >> size;

    // Dynamically allocate memory for the array
    arr = new int[size];

    // Input 0s and 1s in the array
    cout << "Enter only 0s and 1s in Array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        
        // Check if the input is valid (0 or 1)
        while(arr[i] != 0 && arr[i] != 1)
        {
            cout << "Enter 1 or 0 ONLY!! : ";
            cin >> arr[i];
        }
    }

    // Segregate 0s and 1s using bubble sort
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Output the segregated array
    cout << "Segregated Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    // Free dynamically allocated memory
    delete[] arr;

    return 0;
}

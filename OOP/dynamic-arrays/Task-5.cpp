#include<iostream>
using namespace std;

// Function prototypes
void Input(int * & iarr, int & size); // Pass size by reference as it will change
void reverse(int * iarr, int size);
void Output(int * iarr, int size);

int main()
{
	int *A;
	int size = 5; // Initial size of the array
	A = new int[5]; // Dynamically allocate memory for the array
	Input(A, size); // Call input function to get user input
	reverse(A, size); // Reverse the array
	Output(A, size); // Output the reversed array
	delete[] A; // Free memory allocated for the array
	system("pause");
	return 0;
}

// Function to take input from user until -1 is entered
void Input(int * & iarr, int & size)
{
	int num;
	cout << "Input Numbers and enter -1 to end!" << endl;
	for (int i = 0; ; i++) // Loop indefinitely
	{
		cin >> num;
		if (num == -1) // Check if user entered -1
		{
			break; // Exit loop if -1 is entered
		}
		if (i == size) // If the array is filled
		{
			int newSize = size * 2; // Double the size
			int *temp = new int[newSize]; // Create a new array with double size
			for (int j = 0; j < size; j++) // Copy elements to the new array
			{
				temp[j] = iarr[j];
			}
			delete[] iarr; // Free memory of old array
			iarr = temp; // Point to the new array
			size = newSize; // Update the size
		}
		iarr[i] = num; // Store the input number in the array
	}
}

// Function to reverse the array
void reverse(int * iarr, int size)
{
	for (int i = 0; i < size / 2; i++) // Iterate till the middle of the array
	{
		// Swap elements at position i and size - 1 - i
		int temp = iarr[i];
		iarr[i] = iarr[size - 1 - i];
		iarr[size - 1 - i] = temp;
	}
}

// Function to output the array
void Output(int * iarr, int size)
{
	cout << "Reversed Array: ";
	for (int i = 0; i < size; i++) // Iterate through the array
	{
		cout << iarr[i] << " "; // Output each element
	}
	cout << endl;
}

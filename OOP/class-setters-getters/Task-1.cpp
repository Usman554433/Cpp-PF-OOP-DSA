#include<iostream>
using namespace std;

int main()
{
	int size;
	int c = 0; // Initialize variable to count characters
	char key, enK;
	cout << "Enter Size For Character Array: ";
	cin >> size;
	char *cArr;
	cArr = new char[size];
	cout << "Enter Array elements: ";
	cin.ignore();
	cin.getline(cArr, size);
	
	// Count the number of characters in the array
	for (c = 0; *(cArr + c) != '\0'; c++)
	{
	}

	cout << "Enter Encryption Key: ";
	cin >> key;

	// Determine the encryption key value based on lowercase or uppercase
	if (key >= 97 && key <= 122)
	{
		enK = key - 96; // Lowercase letter
	}
	else 
	{
		enK = key - 64; // Uppercase letter
	}
	
	cout << "New Size Of Array: " << c << endl;
	
	// Encrypt the array
	for (int i = 0; i < c; i++)
	{
		// Ignore spaces during encryption
		if (*(cArr + i) == 32) // ASCII value for space
		{
			continue;
		}
		
		// Apply the encryption key
		*(cArr + i) = (*(cArr + i) + enK);

		// Handle rotation if the shift takes past the end of the alphabet
		if (*(cArr + i) > 'z' || (*(cArr + i) > 'Z' && *(cArr + i) < 'a'))
		{
			*(cArr + i) -= 26; // Rotate back to the front of the alphabet
		}
	}

	char *cArr2;
	cArr2 = new char[c + 1]; // Allocate memory for the new array
	// Deep copy the encrypted array
	for (int i = 0; i < c; i++)
	{
		*(cArr2 + i) = *(cArr + i);
	}
	*(cArr2 + c) = '\0'; // Add null terminator to the end of the array

	cout << "Encrypted array is: " << cArr2 << endl;
	delete[] cArr; // Deallocate memory for the original array
	delete[] cArr2; // Deallocate memory for the new array

	system("pause");
	return 0;
}

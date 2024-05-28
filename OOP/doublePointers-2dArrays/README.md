TASK-1:
A C++ program “Encrypt” that creates a dynamic char array of size defined by the user. Then
takes input of that array from the user and resize the original array to size equal to the number of
characters entered by the user.
Your function now asks the user to enter encryption key that can be any alphabet (a-z, A-Z).
Encrypt function adds the ASCII of encryption key to each char of your input array to generate
encrypted sentence. If the shift takes you past the end of the alphabet, just rotate back to the front
of the alphabet. In the case of a shift factor of 3 the message “wxyz” would map to “zabc” i.e. w
becomes z, x becomes a, y becomes b and z becomes c.
Note: Array subscript notation cannot be used.
- For Example:
- INPUT: 
- Enter Size of array: 100
- Enter the array elements: This is object oriented class
- Enter the encryption key: d
- OUTPUT: 
- New Size of array: 29
- Encrypted array: Pdeojeojkxfaypjkneajpazjyhwoo

TASK-2:
Write a function char** AllocateMemory(int& rows, int& cols) that takes size
of matrix (rows and columns) from user, allocates memory for the matrix and
return its pointer.
ii) Write a function char** InputMatrix(char** matrix, const int rows, const int cols)
which takes input the values in matrix from user(console) and return the matrix to main
function.
iii) Write a function void DisplayMatrix(char** matrix, const int& rows, const int&
cols) that displays the matrix in proper format.

iv) Write a function that does the following:
● Creates three dynamic char arrays namely alphabets, numbers, and specialchar.
(Define the sizes yourself).
● Iterate the 2D array and separate alphabet elements and save them in the alphabets
array, separate number elements and save them in numbers array and separate special
character elements and save them in the specialchar array.
● The function returns the three arrays alphabets, numbers, and specialchar.
● Note: The three arrays should not consume any extra space. Resize the arrays
accordingly.

- For Example:
- INPUT:
- Sample Matrix is:
- A 1 v @
- + 9 s 6
- P # ^ 4

- OUTPUT:
- Function will return the following arrays:
- alphabets = A v s P
- numbers = 1 9 6 4
- specialchar = @ + # ^

TASK-3:
- a) Write a function char** AllocateMemory(int& rows, int& cols) that takes size of a char
matrix (rows and columns) from user, allocates memory for the matrix and return its pointer.
- b) Write a function void LoadMatrix(char** matrix, const int rows, const int cols) which loads
the data from a .txt file and store the values in the matrix.
- c) Write a function void DisplayMatrix(char** matrix, const int& rows, const int& cols) that
displays the matrix in proper format.
- d) Write a function called char** removeFromMatrix(char** matrix1, const char rchar,
char** matrix2, const int rows) to copy the given matrix to another matrix with all rows and
columns containing the occurrence of a given character removed. The rows and columns at
the end should be filled with ‘-‘. In the following example, Matrix2 is formed after removal
of character ‘a’ from Matrix1.
- e) Write a function void DeallocateMemory(char** matrix, const int& rows) that deallocates
all the memory.

TASK-4:
Write a function called rotateOuterLayerBy1, which takes a 2 dimensional square matrix and
its dimension, n, as parameters and rotate the outermost layer by one place, anti-clockwise. Use
2D pointers to create and access the two dimensional array.
- Constraint: Your code cannot create an extra array to accomplish the given task. But you can
create one or two extra integers.

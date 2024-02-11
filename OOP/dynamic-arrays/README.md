TASK-1: 
Write a C++ program that declares and initializes an integer array dynamically. The input array
should only contain 0s and 1s in random order. Segregate 0s on left side and 1s on right side of
the array.
- Input:
- 10110101
- Output:
- 00011111

TASK-2: 
Fibonacci sequence is a sequence in which every number after the first two is the sum of the two
preceding ones. Write a C++ program that takes a number n from user and populate a dynamic
array with first n Fibonacci numbers.
- For example:
- For n=10
- Fibonacci Numbers: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55

TASK-3: 
Write a C++ program that takes the size ‘n’ of array and a number ‘x’ as input from user and
declares and initializes an integer array dynamically. Then take any m numbers from user as
input and store in the array (where m < n).
The program should print the occurrence of ‘x’ (Number of times ‘x’ occurred in array). Then it
should print the number of free slots available in array and shrink the array (Delete free slots
present in array)

- For Example:
- Input:
- Please enter size: 9
- Please the number to find the occurrence: 5
- Please enter elements: 1 3 5 6 4 5
- Output:
- Occurrence of 5: 2
- Number of free slots: 3

TASK-4: 
Take an integer ‘n’ as input from user. Create and initialize a dynamic array of size n-1 with
elements ranging from 1 to n (no duplicates). One of the integer will be missing in the array.
The task is to find the missing element in the array. Then grow the size of array and add the
missing element.
hint: The sum of n elements can be found by n * (n+1)/2 or (n+1) * (n+2)/2

- For Example:
- Input:
- Enter the number: 8
- Print:
- Array of size 7 created
- Input:
- Enter 7 elements in range 1-8: 1 3 4 5 6 7 8
- Output:
- Missing Element: 2
- New Array Elements: 1 2 3 4 5 6 7 8

TASK-5: 
Write a C++ program that keeps taking integer input from the user until user enters -1 and
displays the data in reverse order.
Your program should save the input in a dynamically allocated array. Initially create a dynamic
array of five integers. Each time the array gets filled your program should double the size of
array and continue taking the input. After receiving -1 (i.e. end of data input) your program
should print the integers in the reverse order as entered by the user.
You have to make use of the following functions for this task:
- void Input (int * & iarr, int & size); //why is size passed by reference for this?
- void reverse (int * iarr, int size);
- void Output (int * iarr, int size);

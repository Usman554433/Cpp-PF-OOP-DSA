TASK-1:
Implement the following function in C++ called that takes in as input a number N and prints the
first N number of the fibonacci sequence. Please also write the driver program for N = 10 and 15.
void fibonacciSeries(int n)

TASK-2:
Write a program in C++ (using function with parameter passed in by reference) for finding the
character grade against marks out of 100. The character grade is determined as follows:
- If the marks are more than 80 the grade is A
- If the marks are more than 65 but less than 80 the grade is B
- If the marks are more than 50 but less than 65 the grade is C
- If the marks are less than 50 the grade is F
The function’s signature should be as follows:
void calculateGrade( int marks, char &grade)
The driver program should include a loop that lets the user repeat the grade calculation until the
user enters -1.

TASK-3:
void resverse_Array(int arr [ ], int size), Implement the function reverse_Array. Don’t print the array.
Take care of even and odd size. Only function implementation is required. Don’t declare any new array.

TASK-4:
Write a function given an array of integers nums [] and an integer target,and display the indices of the two
numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element
twice.
You can return the answer in any order.
void twoSum(int nums[], int target)
- Example 1:
- Input: nums = [2,7,11,15], target = 9
- Output: [0,1]
- Output: Because nums[0] + nums[1] == 9, we display [0, 1].

TASK-5:
Given two sorted arrays nums1 and nums2 of size m and n respectively, write a function that return the
median of the two sorted arrays.
double findMedianSortedArrays(int nums1[], int nums2[])
- Example 1:
- Input: nums1 = [1,3], nums2 = [2]
- Output: 2.00000
- Explanation: merged array = [1,2,3] and median is 2.

TASK-6:
Write a program which should detect whether a given matrix is identity or not.
An identity matrix is a matrix is a matrix whose diagonal entries are 1 and non-
diagonal entries are 0.

TASK-7:
Write a program for addition/subtraction of two Matrices of same size.

TASK-8:
Write a user defined function named Upper-half() which takes a two dimensional array A, with
size N rows and N columns as argument and prints the upper half of the array.
e.g.,
- 2 3 1 5 0                               2 3 1 5 0
- 7 1 5 3 1                                 1 5 3 1
- 2 5 7 8 1   Output will be:                 1 7 8
- 0 1 5 0 1                                     0 1
- 3 4 9 1 5                                       5

TASK-9:
Write a function in C++ which accepts a 2D array of integers and its size as arguments and
displays the elements of middle row and the elements of middle column.
[Assuming the 2D Array to be a square matrix with odd dimension i.e. 3x3, 5x5, 7x7 etc...]
Sample Run:
- Input: 2 dimension 3X3 array
- 3  5  4
- 7  6  9
- 2  1  8

- Output through the function should be:
- Middle Row: 7 6 9

- Middle column:  
- 5
- 6
- 1

TASK-10:
Write a program which inputs a square matrix from user and then allow to rotate 90
degree(anti clock wise rotation), -90 degree(clock wise rotation). After that it should
allow 180 rotation or 270 or any multiple of 90. Similarly any multiple of -90 degree.

- Input
- 1 2 3
- 4 5 6
- 7 8 9

- Output ( 90 degree anti clock wise rotation )
- 3 6 9
- 2 5 8
- 1 4 7

- Output ( - 90 degree clock wise rotation )
- 7 4 1
- 8 5 2
- 9 6 3

TASK-11:
A local zoo wants to keep track of how many
pounds of food each of its three monkeys eats each
day during a typical week. Write a program that
stores this information in a two-dimensional 3x5
array, where each row represents a different
monkey and each column represents a different
day of the week. The program should first have the
user input the data for each monkey. Then it should
create a report that includes the following
information:
➢ The average amount of food eaten per day by
the whole family of monkeys.

➢ The least amount of food eaten during the week
by anyone monkey.
➢ The greatest amount of food eaten during the
week by anyone monkey. Input Validation: Do not
accept negative numbers for pounds of food eaten.

TASK-12:

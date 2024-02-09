#include<iostream>
using namespace std;

int main()
{
    const int a = 5;
    const int b = 10;
    const int c = 12;
    int median;
    int *ptrMedian = &median; // Pointer to store the median value

    // Finding the median among the three integers using pointers
    if ((a > b && a < c) || (a > c && a < b)) {
        *ptrMedian = a; // If 'a' is the median, assign its value to median pointer
    }
    if ((b > a && b < c) || (b > c && b < a)) {
        *ptrMedian = b; // If 'b' is the median, assign its value to median pointer
    }
    if ((c > b && c < a) || (c > a && c < b)) {
        *ptrMedian = c; // If 'c' is the median, assign its value to median pointer
    }

    // Printing the median
    cout << "Median is : " << *ptrMedian << endl;

    // Attempting to assign -1 to whichever integer is the median through pointers
    // This operation cannot be done as 'b' is declared as const and cannot be modified
    // b = *ptrMedian; // Error generated as b is const

    system("pause");
    return 0;
}

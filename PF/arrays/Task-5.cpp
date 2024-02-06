#include<iostream>
using namespace std;

double findMedianSortedArrays(int nums1[], int nums2[], int m, int n) {
    double median;
    int mergeArray[200]; // Assuming maximum size for merged array
    int i, temp = 0;

    // Input elements for nums1 array
    cout << "Enter " << m << " Elements in array nums1: " << endl;
    for (i = 0; i < m; i++) {
        cin >> nums1[i];
        mergeArray[i] = nums1[i]; // Copy elements to mergeArray
    }

    // Input elements for nums2 array
    cout << "Enter " << n << " Elements in array nums2: " << endl;
    for (i = 0; i < n; i++) {
        cin >> nums2[i];
        mergeArray[m] = nums2[i]; // Copy elements to mergeArray
        m++;
    }

    // Sorting the mergeArray (using selection sort)
    for (int k = 0; k < m; k++) {
        for (int j = k + 1; j < m; j++) {
            if (mergeArray[k] > mergeArray[j]) {
                // Swap elements if they are out of order
                temp = mergeArray[k];
                mergeArray[k] = mergeArray[m - 1 - k];
                mergeArray[m - 1 - k] = temp;
            }
        }
    }

    // Calculating median based on size of merged array
    if (m % 2 != 0) {
        return mergeArray[m / 2];
    } else {
        median = double((mergeArray[(m / 2)] + mergeArray[(m / 2) - 1]) / 2.00);
        return median;
    }
}

int main() {
    int m, n, nums1[100], nums2[100];
    double median;

    cout << "Enter Array size nums1: "; cin >> m;
    cout << "Enter Array size nums2: "; cin >> n;

    median = findMedianSortedArrays(nums1, nums2, m, n);
    cout << "The Median is: " << median << endl;

    return 0;
}

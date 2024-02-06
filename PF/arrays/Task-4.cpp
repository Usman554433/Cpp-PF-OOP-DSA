#include<iostream>
using namespace std;

// Function to find two numbers in the array that add up to the target
void twoSum(int nums[], int x, int target) {
    // Nested loops to iterate through the array elements
    for(int i = 0; i < x; i++) {
        for (int j = i + 1; j < x; j++) {
            // Check if the sum of current pair of numbers equals the target
            if((nums[i] + nums[j]) == target) {
                // Display the indices of the two numbers
                cout << "Indices of numbers adding up to target: " << i << " and " << j << endl;
                return; // Found the solution, exit the function
            }
        }
    }
    // If no solution found
    cout << "No two numbers found adding up to target." << endl;
}

int main() {
    int nums[100], target, x;
    cout << "Enter array size: "; cin >> x;
    cout << "Enter " << x << " elements in the array: " << endl;
    for (int i = 0; i < x; i++) {
        cin >> nums[i];
    }
    cout << "Enter target to find: "; cin >> target;
    twoSum(nums, x, target); // Call the function to find two numbers
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to rotate the matrix by 90 degrees anti-clockwise
vector<vector<int>> rotateMatrix90(const vector<vector<int>>& matrix) {
    int size = matrix.size();
    vector<vector<int>> rotated(size, vector<int>(size));
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            rotated[i][j] = matrix[j][size - 1 - i];
        }
    }
    return rotated;
}

// Function to rotate the matrix by -90 degrees (clockwise)
vector<vector<int>> rotateMatrixNeg90(const vector<vector<int>>& matrix) {
    int size = matrix.size();
    vector<vector<int>> rotated(size, vector<int>(size));
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            rotated[i][j] = matrix[size - 1 - j][i];
        }
    }
    return rotated;
}

// Function to rotate the matrix by 180 degrees
vector<vector<int>> rotateMatrix180(const vector<vector<int>>& matrix) {
    int size = matrix.size();
    vector<vector<int>> rotated(size, vector<int>(size));
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            rotated[i][j] = matrix[size - 1 - i][size - 1 - j];
        }
    }
    return rotated;
}

// Function to print the matrix
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter the size of the square matrix: ";
    cin >> size;

    vector<vector<int>> matrix(size, vector<int>(size));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "Original Matrix:" << endl;
    printMatrix(matrix);

    cout << "Rotated by 90 degrees anti-clockwise:" << endl;
    vector<vector<int>> rotated90 = rotateMatrix90(matrix);
    printMatrix(rotated90);

    cout << "Rotated by -90 degrees clockwise:" << endl;
    vector<vector<int>> rotatedNeg90 = rotateMatrixNeg90(matrix);
    printMatrix(rotatedNeg90);

    cout << "Rotated by 180 degrees:" << endl;
    vector<vector<int>> rotated180 = rotateMatrix180(matrix);
    printMatrix(rotated180);

    return 0;
}

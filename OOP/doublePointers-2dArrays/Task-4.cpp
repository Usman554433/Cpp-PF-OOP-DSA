#include <iostream>
#include <algorithm> // Include algorithm for swap function
using namespace std;

// Function to rotate the outer layer of a square matrix by one place anti-clockwise
void rotate_outer_layer_by_1(int **matrix, int dimension) {
    // Rotate the first row
    for (int i = 0; i < dimension - 1; i++) {
        swap(matrix[0][i], matrix[0][i + 1]);
    }
    // Rotate the last column
    for (int i = 0; i < dimension - 1; i++) {
        swap(matrix[i][dimension - 1], matrix[i + 1][dimension - 1]);
    }
    // Rotate the last row
    for (int i = dimension - 1; i > 0; i--) {
        swap(matrix[dimension - 1][i], matrix[dimension - 1][i - 1]);
    }
    // Rotate the first column
    for (int i = dimension - 1; i > 1; i--) {
        swap(matrix[i][0], matrix[i - 1][0]);
    }
}

int main() {
    int **matrix;
    int dimension;

    cout << "Enter the dimension of the square matrix: ";
    cin >> dimension;

    // Allocate memory for the matrix
    matrix = new int*[dimension];
    for (int i = 0; i < dimension; i++) {
        matrix[i] = new int[dimension];
    }

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "BEFORE ROTATION:" << endl;
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Rotate the outer layer of the matrix
    rotate_outer_layer_by_1(matrix, dimension);

    cout << "AFTER ROTATION:" << endl;
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory for the matrix
    for (int i = 0; i < dimension; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}

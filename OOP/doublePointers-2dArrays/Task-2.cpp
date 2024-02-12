#include<iostream>
#include <tuple>
using namespace std;

char** AllocateMemory(int& rows, int& cols);
char** InputMatrix(char** matrix, const int rows, const int cols);
void DisplayMatrix(char** matrix, const int& rows, const int &cols);
tuple<char**, char**, char**> SeparateElements(char** matrix, const int& rows, const int& cols);
void DisplayArray(char** arr);

int main() {
    char **P;
    int rows, cols;
    cout << "Enter Rows: "; cin >> rows;
    cout << "Enter Columns: "; cin >> cols;
    P = AllocateMemory(rows, cols);
    P = InputMatrix(P, rows, cols);
    DisplayMatrix(P, rows, cols);
    char **alphabets, **numbers, **specialchar;
    alphabets = new char*[rows * cols];
    numbers = new char*[rows * cols];
    specialchar = new char*[rows * cols];
    tie(alphabets, numbers, specialchar) = SeparateElements(P, rows, cols);
    cout << "Function will return the following arrays:" << endl;
    cout << "alphabets = ";
    DisplayArray(alphabets);
    cout << "numbers = ";
    DisplayArray(numbers);
    cout << "specialchar = ";
    DisplayArray(specialchar);

    system("pause");
    return 0;
}

char** AllocateMemory(int& rows, int& cols) {
    char **P;
    P = new char*[rows];
    for (int i = 0; i < rows; i++) {
        P[i] = new char[cols];
    }
    return P;
}

char** InputMatrix(char** matrix, const int rows, const int cols) {
    cout << "Enter Matrix Elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    return matrix;
}

void DisplayMatrix(char** matrix, const int& rows, const int &cols) {
    cout << "Matrix is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

tuple<char**, char**, char**> SeparateElements(char** matrix, const int& rows, const int& cols) {
    char** alphabets;
    char** numbers;
    char** specialchar;
    int alphaIndex = 0, numIndex = 0, specialIndex = 0;

    // Allocate memory for arrays
    alphabets = new char*[rows * cols];
    numbers = new char*[rows * cols];
    specialchar = new char*[rows * cols];

    // Iterate through the matrix to separate elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (isalpha(matrix[i][j])) {
                alphabets[alphaIndex++] = &matrix[i][j];
            } else if (isdigit(matrix[i][j])) {
                numbers[numIndex++] = &matrix[i][j];
            } else {
                specialchar[specialIndex++] = &matrix[i][j];
            }
        }
    }

    // Null terminate the arrays
    alphabets[alphaIndex] = nullptr;
    numbers[numIndex] = nullptr;
    specialchar[specialIndex] = nullptr;

    return make_tuple(alphabets, numbers, specialchar);
}

void DisplayArray(char** arr) {
    for (int i = 0; arr[i] != nullptr; i++) {
        cout << *arr[i] << " ";
    }
    cout << endl;
}

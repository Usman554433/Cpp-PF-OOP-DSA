#include<iostream>
#include<fstream>
using namespace std;

char** AllocateMemory(int& rows, int& cols);
void LoadMatrix(char** matrix, const int rows, const int cols);
void DisplayMatrix(char** matrix, const int& rows, const int& cols);
char** removeFromMatrix(char** matrix1, const char rchar, char** matrix2, int rows, int cols);
void DeallocateMemory(char** matrix, const int& rows);

int main()
{
    int rows, cols;
    char rchar;
    char **cArr;
    char **cArr2 = nullptr; // Initialize to nullptr

    cout << "Enter Number Of Rows: "; cin >> rows;
    cout << "Enter Number Of Columns: "; cin >> cols;

    cArr = AllocateMemory(rows, cols);
    LoadMatrix(cArr, rows, cols);
    cout << "Matrix Loaded from File:" << endl;
    DisplayMatrix(cArr, rows, cols);

    cout << "Enter Letter To remove: "; cin >> rchar; 
    cArr2 = removeFromMatrix(cArr, rchar, cArr2, rows, cols);
    cout << "Matrix After Removal:" << endl;
    DisplayMatrix(cArr2, rows, cols);

    DeallocateMemory(cArr, rows);
    DeallocateMemory(cArr2, rows);

    return 0;
}

char** AllocateMemory(int& rows, int& cols)
{
    char **CArr;
    CArr = new char*[rows];
    for (int i = 0; i < rows; i++)
    {
        CArr[i] = new char[cols];
    }

    return CArr;
}

void LoadMatrix(char** matrix, const int rows, const int cols)
{
    ifstream usman;
    usman.open("USMAN.txt", ios::in);
    if (!usman.is_open()) {
        cout << "Error opening file!" << endl;
        return;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            usman >> matrix[i][j];
        }
    }
    usman.close();
}

void DisplayMatrix(char** matrix, const int& rows, const int& cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

char** removeFromMatrix(char** matrix1, const char rchar, char** matrix2, int rows, int cols)
{
    // Copy matrix1 to matrix2 and remove characters
    matrix2 = AllocateMemory(rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix1[i][j] == rchar)
            { 
                matrix2[i][j] = '-';
            }
            else
            {
                matrix2[i][j] = matrix1[i][j];
            }
        }
    }
    return matrix2;
}

void DeallocateMemory(char** matrix, const int& rows)
{
    for (int i = 0; i < rows; i++)
    {
        delete [] matrix[i];
    }
    delete [] matrix;
}

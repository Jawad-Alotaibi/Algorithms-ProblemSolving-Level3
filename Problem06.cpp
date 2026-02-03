#include <iostream>
#include <iomanip>

using namespace std;
void fillMatrixWitOrderedNumbers(int matrix[3][3], short rows, short cols);
void printMatrix(int matrix[3][3], short rows, short cols);
int main()
{
    // Write a program to fill 3x3 matrix with ordered numbers
    int matrix[3][3];
    fillMatrixWitOrderedNumbers(matrix, 3,3);
    cout << "The followint is 3x3 matrix with ordered numbers\n";
    printMatrix(matrix,3,3);
    return 0;
}

void fillMatrixWitOrderedNumbers(int matrix[3][3], short rows, short cols)
{
    int counter = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            counter++;
            matrix[i][j] = counter;
        }
        
    }
    
}

void printMatrix(int matrix[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(3) << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

#include <iostream>
#include "HeaderFiles/MatrixLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"

using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    int matrix[3][3];
    int rows = 3, cols = 3;
    MatrixLibrary::fillArrayWithRandomNumbers(matrix, rows, cols);
    cout << "Matrix1: \n";
    MyOutputLibrary::printMatrix(matrix, rows, cols);
    cout << endl;

    int sumOfMatrix = MatrixLibrary::sumAllNumbersInMatrix(matrix, rows, cols);
    cout << "Sum of Matrix is: " << sumOfMatrix;
    cout << endl;
}

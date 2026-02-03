#include <iostream>
#include "HeaderFiles/MatrixLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"

using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    int matrix1[3][3] , matrix2[3][3];
    int rows = 3, cols = 3;
    MatrixLibrary::fillArrayWithRandomNumbers(matrix1, rows, cols);
    cout << "Matrix1: \n";
    MyOutputLibrary::printMatrix(matrix1, rows, cols);
    cout << endl;

    MatrixLibrary::fillArrayWithRandomNumbers(matrix2, rows, cols);
    cout << "Matrix2: \n";
    MyOutputLibrary::printMatrix(matrix2, rows, cols);
    cout << endl;

    if(MatrixLibrary::areEqualMetrices(matrix1,matrix2, rows,cols))
    {
        cout << "Yes: mertrices are EQUAL\n ";
    }
    else
        cout << "No: metrices are NOT equal\n";

        cout << endl;
        return 0;
}

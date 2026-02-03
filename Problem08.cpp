#include <iostream>
#include "HeaderFiles/MatrixLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"
using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    int randomMatrix1[3][3], randomMatrix2[3][3], multipliedMatrix[3][3];
    MatrixLibrary::fillArrayWithRandomNumbers(randomMatrix1, 3,3);
    MatrixLibrary::fillArrayWithRandomNumbers(randomMatrix2, 3,3);

    cout << "Matrix1: \n";
    MyOutputLibrary::printMatrix(randomMatrix1,3,3);
    cout << "\nMatrix2: \n";
    MyOutputLibrary::printMatrix(randomMatrix2,3,3);

    cout << "\nResult: \n";
    MatrixLibrary::multiplyTwoMatrix(randomMatrix1,randomMatrix2,multipliedMatrix, 3,3);
    MyOutputLibrary::printMultpliedMatrix(multipliedMatrix,3,3);



    return 0;
}
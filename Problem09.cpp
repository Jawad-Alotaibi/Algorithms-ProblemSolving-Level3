#include <iostream>
#include "HeaderFiles/MatrixLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"
using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    int randomMatrix[3][3];
    MatrixLibrary::fillArrayWithRandomNumbers(randomMatrix, 3,3);
     cout << "Matrix1: \n";
    MyOutputLibrary::printMatrix(randomMatrix,3,3);
    cout << "\nMiddle Row of Matrix is: \n";
    MyOutputLibrary::printMiddleRowOfMatrix(randomMatrix,3,3);
    cout << "Middle Column of Matrix is: \n";
    MyOutputLibrary::printMiddleColumnOfMatrix(randomMatrix,3,3);

    return 0;
}
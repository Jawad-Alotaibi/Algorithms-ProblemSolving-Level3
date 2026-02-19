#include <iostream>
#include "HeaderFiles/MatrixLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"

using namespace std;

int main()
{
    
   int matrix1[3][3] = 
    {
        {77,5,12},
        {22,80,1},
        {1,0,9}
    };
    int matrix2[3][3] = 
    {
        {5,80,90},
        {22,77,1},
        {10,8,33}
    };

    int intersectedMatrix[9]; 
    cout << "Matrix1: \n";
    MyOutputLibrary::printMatrix(matrix1,3,3);

    cout << "Matrix2: \n";
    MyOutputLibrary::printMatrix(matrix2,3,3);

    cout << "Intersected Numbers are: \n";
     MatrixLibrary::findIntersected(matrix1,matrix2, intersectedMatrix, 3,3);
    
     MyOutputLibrary::printOneDimensionalMatrix(intersectedMatrix,3);
     cout << endl;
}
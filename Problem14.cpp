#include <iostream>
#include "HeaderFiles/MatrixLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"

using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    int matrix1[3][3] = {
        {50,0,0},
        {0,50,0},
        {0,0,50}
    };

    //  int matrix1[3][3] = {
    //     {1,4,3},
    //     {4,1,2},
    //     {7,8,1}
    // };
    int rows = 3, cols = 3;
    
    cout << "Matrix1: \n\n";
    MyOutputLibrary::printMatrix(matrix1, rows, cols);
    cout << endl;


    if(MatrixLibrary::isScalar(matrix1,rows,cols))
    {
        cout << "YES: Matrix is Scalar\n ";
    }
    else
        cout << "NO: Matrix is not Scalar\n ";

        cout << endl;
        return 0;
}

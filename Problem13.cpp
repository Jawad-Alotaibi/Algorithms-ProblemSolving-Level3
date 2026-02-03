#include <iostream>
#include "HeaderFiles/MatrixLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"

using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    int matrix1[3][3] = {
        {1,1,0},
        {0,1,0},
        {0,0,1}
    };
    int rows = 3, cols = 3;
    
    cout << "Matrix1: \n";
    MyOutputLibrary::printMatrix(matrix1, rows, cols);
    cout << endl;


    if(MatrixLibrary::isIdentity(matrix1,rows,cols))
    {
        cout << "YES: Matrix is identity\n ";
    }
    else
        cout << "NO: Matrix is not identity\n ";

        cout << endl;
        return 0;
}

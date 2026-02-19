#include <iostream>
#include "HeaderFiles/MatrixLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"

using namespace std;

int main()
{

    int matrix[3][3] = {
        {77,5,12}, 
        {22,20,6},
        {14,3,9}
    };

    cout << "Matrix1: \n";
    MyOutputLibrary::printMatrix(matrix,3,3);
    cout << "\nMinimum Number is: " << MatrixLibrary::findMinimumNumberInMatrix(matrix,3,3);
    cout << "\nMax Number is: " << MatrixLibrary::findMaximumNumberInMatrix(matrix,3,3); 
    cout << endl;

    return 0;
}
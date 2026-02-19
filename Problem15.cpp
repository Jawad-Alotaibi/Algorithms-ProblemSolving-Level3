#include <iostream>
#include "HeaderFiles/MatrixLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"


using namespace std;

int main()
{
    srand((unsigned)time(NULL));
  
     int matrix1[3][3] = {
        {9,4,2},
        {4,9,1},
        {7,9,9}
    };
    int rows = 3, cols = 3;
    
    cout << "Matrix1: \n\n";
    MyOutputLibrary::printMatrix(matrix1, rows, cols);
    cout << endl;

    cout << "Enter the number to count in matrix: ";
   int numberToCount =  MyInputLibrary::readNumber();
   int howManyTimeCounted = MatrixLibrary::countNumberInMatrix(matrix1, numberToCount,3, 3);
    cout << "Number " << numberToCount << " count in matrix is " << howManyTimeCounted << endl;
    cout << endl;
    return 0;
}

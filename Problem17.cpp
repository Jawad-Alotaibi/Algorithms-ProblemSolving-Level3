#include <iostream>
#include "HeaderFiles/MatrixLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"

using namespace std;

int main()
{
    int arr[3][3] = 
    {
        {77,20,12},
        {1,5,9},
        {2,3,5}
    };

    cout << "Matrix1:\n";
    MyOutputLibrary::printMatrix(arr,3,3);
    cout << "Enter the number to look for in matrix? ";
   int numberToFind =  MyInputLibrary::readNumber();
    bool isExsist = MatrixLibrary::checkNumberExsist(arr, numberToFind, 3,3);

    if(isExsist)
    {
        cout << "\nYes it is there.\n";
    } 
    else 
        cout << "\nNo is is not there.\n";

}
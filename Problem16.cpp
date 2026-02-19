#include <iostream>
#include "HeaderFiles/MatrixLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"


using namespace std;

int main()
{
    int arr[3][3] = 
    {
        {0,12,12},
        {0,2,1},
        {0,0,5}
    };

    cout << "Matrix1:\n";
    MyOutputLibrary::printMatrix(arr,3,3);

   bool isSparse =  MatrixLibrary::checkSparce(arr,3,3);

   if(isSparse)
   {
        cout << "\nYes: It is Sparce\n";
   }
   else
    cout << "\nNo: It is NOT Sparce\n";
    return 0;
}
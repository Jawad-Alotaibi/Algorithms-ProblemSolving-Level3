#include <iostream>
#include <iomanip>
#include "HeaderFiles/RandomNumbersLibrary.h"

using namespace std;
void fillArrayMatrix(int arr[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = RandomNumbersLibrary::RandomNumber(1, 100);
        }
        
    }

}
   
void printMatrix(int arr[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << left << setw(3) << arr[i][j] << "  ";
        }
        cout << endl;
    }
}

int rowSum(int arr[3][3], short rowNumber, short cols)
{
    int sumOfRow = 0;
    for (int j = 0; j < cols; j++)
    {
        sumOfRow += arr[rowNumber][j];
    }

    return sumOfRow;
}

void printEachRowSum(int arr[3][3], short rows, short cols)
{
    cout << "The following is a 3x3 random matrix:\n";
    
    for(short i = 0; i < rows; i++)
    {
        cout << "Row " << i + 1 << " Sum = " << rowSum(arr, i, cols);
        cout << endl;
    }
    cout << endl;
}
int main()
{
    //Fill an array 3X3
    //print it
    //loop through each row and sum it and display the sum of each row

    //seed the rand function every second 
    srand((unsigned)time(NULL));

    int arr[3][3];
    fillArrayMatrix(arr,3,3);
    printMatrix(arr,3,3);
    printEachRowSum(arr, 3,3);


    return 0;
}
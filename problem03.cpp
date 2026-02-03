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
    for (int j = 0; j < cols - 1; j++)
    {
        sumOfRow += arr[rowNumber][j];
    }

    return sumOfRow;
}

void sumEachRowInArray(int arr[3][3], short rows, short cols, int sumOfRows[3])
{
    
    
    for(short i = 0; i < rows; i++)
    {
        sumOfRows[i] = rowSum(arr, i, cols);
    }

    
}

void printRowsFromArray(int sumOfRows[3], short rows)
{
    cout << "The following is a 3x3 random matrix:\n";
    for(int i = 0; i < rows; i++)
    {
         cout << "Row " << i + 1 << " Sum = " << sumOfRows[i] << endl; 
    }
}
int main()
{
    //Fill an array 3X3
    //print it
    //loop through each row and sum it and display the sum of each row

    //seed the rand function every second 
    srand((unsigned)time(NULL));

    int arr[3][3];
    int sumOfRows[3];
    fillArrayMatrix(arr,3,3);
    printMatrix(arr,3,3);
    sumEachRowInArray(arr, 3,3, sumOfRows);
    printRowsFromArray(sumOfRows,3);
    return 0;
}
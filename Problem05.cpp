#include <iostream>
#include <iomanip>
#include "HeaderFiles/MyInputLibrary.h"

using namespace std;
void fillArrayMatrix(int arr[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = MyInputLibrary::RandomNumber(1, 100);
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

int columnSum(int arr[3][3], short columnNumber, short rows)
{
    int sumOfCoulmn = 0;
    for (int i = 0; i < rows; i++)
    {
        sumOfCoulmn += arr[i][columnNumber];
    }

    return sumOfCoulmn;
}

void sumEachCoulmnInArray(int arr[3][3], short rows, short cols, int sumOfCoulmn[3])
{

    for (short j = 0; j < cols; j++)
    {
        sumOfCoulmn[j] = columnSum(arr, j, rows);
    }
}

void printCoulmnFromArray(int sumOfCoulmn[3], short rows)
{
    cout << "The following is a 3x3 random matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        cout << "Coulmn " << i + 1 << " Sum = " << sumOfCoulmn[i] << endl;
    }
}
int main()
{
    // Fill an array 3X3
    // print it
    // loop through each row and sum it and display the sum of each row

    // seed the rand function every second
    srand((unsigned)time(NULL));

    int arr[3][3];
    int sumOfCoulmn[3];
    fillArrayMatrix(arr, 3, 3);
    printMatrix(arr, 3, 3);
    sumEachCoulmnInArray(arr, 3, 3, sumOfCoulmn);
    printCoulmnFromArray(sumOfCoulmn, 3);
    return 0;
}
#pragma once 

#include <iostream>
#include <iomanip>
using namespace std;
namespace MyOutputLibrary 
{
    void printResults(int max)
{
    cout << "The max number is: " << max << endl;
}

void printMatrix(int matrix[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(3) << matrix[i][j] << " ";
        }
        cout << endl;
    }

}
void printMiddleRowOfMatrix(int matrix[3][3], short rows, short cols)
{
        int middleRow = rows / 2;
        for (int j = 0; j < cols; j++)
        {
            cout << setw(3) << matrix[middleRow][j] << " ";
        }
        cout << endl;
    
}

void printMiddleColumnOfMatrix(int matrix[3][3], short rows, short cols)
{
    int middleColumn = cols / 2;
    for (int i = 0; i < rows; i++)
    {
        cout << setw(3) << matrix[i][middleColumn] << " ";
        cout << endl;
    }
}
void printMultpliedMatrix(int multipliedMatrix[3][3],short rows, short cols)
{
     for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(multipliedMatrix[i][j] > 9)
            {
                cout << setw(3) << multipliedMatrix[i][j] << " ";
            }
            else
            cout << setw(2) << "0" << multipliedMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

void printMatrixAndAddZeros(int matrix[3][3],short rows, short cols)
{
     for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(matrix[i][j] > 9)
            {
                cout << setw(3) << matrix[i][j] << " ";
            }
            else
            cout << setw(2) << "0" << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

}
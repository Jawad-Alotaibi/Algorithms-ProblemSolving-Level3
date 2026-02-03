#include <iostream>
// #include "HeaderFiles/RandomNumbersLibrary.h"
using namespace std;

namespace MatrixLibrary
{

    int RandomNumber(int From, int To)
    {
        return rand() % (To - From + 1) + From;
    }
    void fillMatrixWitOrderedNumbers(int matrix[3][3], short rows, short cols)
    {
        int counter = 0;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                counter++;
                matrix[i][j] = counter;
            }
        }
    }

    void fillArrayWithRandomNumbers(int arr[3][3], short rows, short cols)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                arr[i][j] = RandomNumber(1, 10);
            }
        }
    }

    void transposedMatrix(int matrix[3][3], int transposedMatrix[3][3], short rows, short cols)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                transposedMatrix[i][j] = matrix[j][i];
            }
        }
    }

    void multiplyTwoMatrix(int matrix1[3][3], int matrix2[3][3], int multipliedMatrix[3][3], short rows, short cols)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                multipliedMatrix[i][j] = matrix1[i][j] * matrix2[i][j];
            }
        }
    }

    int sumAllNumbersInMatrix(int matrix[3][3], int rows, int cols)
    {
        int sum = 0;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                sum += matrix[i][j];
            }
        }
        return sum;
    }
    bool areEqualMetrices(int matrix1[3][3], int matrix2[3][3], int rows, int cols)
    {
        return (sumAllNumbersInMatrix(matrix1, rows, cols) == sumAllNumbersInMatrix(matrix2, rows, cols));
    }

    bool areMetricesTypical(int matrix1[3][3], int matrix2[3][3], short rows, short cols)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (matrix1[i][j] != matrix2[i][j])
                {
                    return false;
                }
            }
        }
        return true;
    }

    bool isIdentity(int matrix[3][3], int rows, int cols)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (! (matrix[i][i] == 1))
                {
                    return false;
                }
                if (matrix[i][j] > 1 || matrix[i][j] < 0)
                {
                    return false;
                }
            }
        }
        return true;
    }
}

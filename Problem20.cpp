#include <iostream>
#include "HeaderFiles/MatrixLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"

using namespace std;

int main()
{

    int matrix[3][3] = {
        {1, 2, 1},
        {5, 5, 5},
        {7, 3, 7}};

    MyOutputLibrary::printMatrix(matrix, 3, 3);
    bool isPalindrome = MatrixLibrary::isPalinrome(matrix, 3, 3);

    if (isPalindrome)
    {
        cout << "Yes: Matrix is palindrome\n";
    }
    else
        cout << "No: Matrix is not palindrome\n";
    return 0;
}

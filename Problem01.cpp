/*
     the debugger needs two things:
     a task to compile the code (turning your .cpp into an executable) and a launch configuration to run that executable.
*/

#include <iostream>
#include "HeaderFiles/MyInputLibrary.h"
#include <iomanip>
using namespace std;

void fillArrayWithRandomNumbers(int arr[3][3], short rows, short cols)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            arr[i][j] = MyInputLibrary::RandomNumber(1,100);
        }
    }
}

void printMatrix(int arr[3][3],short rows, short cols)
{
      for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << setw(3) << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    /*
        1. The Problem: Computers aren't truly random
            The rand() function in C++ uses a mathematical formula to generate a sequence of numbers. Because it’s a formula, if you start with the same "seed" value, you will get the exact same results every time.

            2. The Solution: srand()
            The s in srand stands for seed. This function sets the starting point (the seed) for the rand() algorithm.

            If you call srand(10), the sequence of numbers will always be the same for seed 10.

            To get different numbers every time the program starts, we need a seed that changes constantly.

            3. The Seed: time(NULL)
            The time(NULL) function returns the current Unix Timestamp (the number of seconds passed since January 1, 1970).

            Since the time is different every second, the seed will be different every time you run your program.

            The (unsigned) part is just a "typecast" to make sure the time value matches the data type that srand expects.

            Putting it all together
            When you write srand((unsigned)time(NULL));, you are telling the computer:

            "Look at the current clock to get a unique number, and use that number to jump-start the random number generator."
*/
    srand((unsigned)time(NULL));
    int arr[3][3];
    fillArrayWithRandomNumbers(arr, 3, 3);
    cout << "The Following is a 3X3 random matrix" << endl;
    printMatrix(arr, 3, 3);


    return 0;
}
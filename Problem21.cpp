#include <iostream>
#include "HeaderFiles/MatrixLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"

using namespace std;
void printFibonacciUsingLoop(int n)
{
    int prev1 = 1;
    int prev2 = 0;
    int febNumber = 0;
    cout << "1  ";
    for (int i = 2; i <= n; i++)
    {
        febNumber = prev1 + prev2;
        cout << febNumber << "  ";
        prev2 = prev1;
        prev1 = febNumber;
    }
    
    
}
int main()
{
     printFibonacciUsingLoop(10);
     cout << endl;
    return 0;
}

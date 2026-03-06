#include <iostream>
#include "HeaderFiles/MatrixLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"

using namespace std;


// void fibonacci(int number, int prev1, int prev2)
// {
//     int febNumber = 0;

//     if(number > 0) // base case: the condition that stops the recursive calls  
//     {
//         febNumber = prev1 + prev2;
//         prev2 = prev1;
//         prev1 = febNumber;
//         cout << febNumber<< "   ";
//         fibonacci(number - 1, prev1, prev2);
//     }
// }

void fibonacci(int number, int prev1, int prev2)
{

    int febonacciNumber = 0;
    
    
    if (number > 0)
    {
        febonacciNumber = prev1 + prev2;
        prev2 = prev1;
        prev1 = febonacciNumber; 
        cout << febonacciNumber  << " ";

        fibonacci(number - 1, prev1, prev2);

    }

}
int main()
{
    fibonacci(10, 0, 1);
    cout << endl;
    return 0;
}

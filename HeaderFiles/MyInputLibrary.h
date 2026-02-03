#pragma once
#include <iostream>
using namespace std;
namespace MyInputLibrary 
{
    int readNumber()
{
    int number;
    cout << "Enter Number please\n";
    //when the cin object read from the screen anything rather than numbers it will fail
    cin >> number;
   
    while (cin.fail())
    {
        cin.clear();
        //it will ignore the input at any size until it found \n
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Enter a valid number please\n";
        cin >> number;
    }

    return number;
}


    int ReadPositiveNumber(string message)
    {
        int number = 0;

    
        do
        {
            cout << message << endl;
            cin >> number;
        }while(number <= 0);

        return number;
    }


}
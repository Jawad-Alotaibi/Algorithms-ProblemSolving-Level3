#include <iostream>

#include "HeaderFiles/StringLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"
#include "HeaderFiles/BankLibrary.h"

using namespace std;
using namespace BankLibrary;
using namespace MyInputLibrary;

int main()
{
    findClientByAccountNumber(readString("Please Enter AccountNumber ?"));

    return 0;
}
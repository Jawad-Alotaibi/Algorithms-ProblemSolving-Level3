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
    string accountNumber = readString("Please Enter AccountNumber ?");
    stClient client;

    if (findClientByAccountNumber(accountNumber, client))
    {
        cout << endl << "The following are client details" << endl << endl;
        printClientData(client);
    }
    else
        cout << endl << "Client with account number (" << accountNumber << ")" << " Not Found!" << endl;

    return 0;
}
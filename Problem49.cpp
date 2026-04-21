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
    char wannaDeleteUser = 'n';

    if (findClientByAccountNumber(accountNumber, client))
    {
        printClientData(client);
        cout << "Are you sure you wanna delete this client? Y/N? ";
        cin >> wannaDeleteUser;

        if(toupper('y') == toupper(wannaDeleteUser))
        {
            deleteClient(accountNumber);
            cout << "\nDelete Client Successfully.\n"; 

        }
    }
    else
        cout << endl << "Client with account number (" << accountNumber << ")" << " Not Found!" << endl;
    
    
    return 0;
}
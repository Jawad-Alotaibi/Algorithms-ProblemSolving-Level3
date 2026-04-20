#include <iostream>

#include "HeaderFiles/StringLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"
#include "HeaderFiles/BankLibrary.h"


using namespace std;
using namespace BankLibrary;

int main()
{
    vector<stClient> vClients = loadClientDataFromFile();
    printAllClients(vClients);
    return 0;
}
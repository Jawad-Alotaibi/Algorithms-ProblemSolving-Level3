#include <iostream>

#include "HeaderFiles/StringLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"
#include "HeaderFiles/BankLibrary.h"


using namespace std;
using namespace BankLibrary;

int main()
{
   stClient client = BankLibrary::readNewClient();
    string line = BankLibrary::convertRecordToLine(client);
    cout << endl << "Client Record for Saving is: " << line << endl;
    return 0;
}
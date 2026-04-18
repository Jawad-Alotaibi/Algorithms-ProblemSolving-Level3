#include <iostream>

#include "HeaderFiles/StringLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"
#include "HeaderFiles/BankLibrary.h"


using namespace std;
using namespace BankLibrary;

int main()
{
    string stLine = "A150#//#1233#//#JAWAD KHALID#//#0591013407#//#40000";
    cout << "Line Record is:" << endl;
    cout << stLine << endl;

    stClient client = BankLibrary::convertLineToRecord(stLine);
    cout << endl << "The following is the extracted client record:" << endl << endl;
    printClientData(client);
    return 0;
}
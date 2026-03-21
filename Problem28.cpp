#include <iostream>
#include "HeaderFiles/StringLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"

using namespace std;

int main()
{

    string s1 = MyInputLibrary::readString();
    cout << "\nString after inverting case:\n";
    s1 = StringLibrary::invertLetterCase(s1);
    cout << s1 << endl;


    return 0;
}
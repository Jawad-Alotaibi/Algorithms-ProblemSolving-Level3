#include <iostream>
#include "HeaderFiles/StringLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"

using namespace std;
//Invert Charcter Case

int main()
{

    char c1 = MyInputLibrary::readChar();
    cout << "\nChar after inverting case:\n";
    c1 = StringLibrary::invertLetterCase(c1);
    cout << c1 << endl;


    return 0;
}
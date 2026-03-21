#include <iostream>
#include "HeaderFiles/MyInputLibrary.h" // c++ deal with single quote for chars
#include "HeaderFiles/StringLibrary.h"
#include <cctype>

using namespace std;

int main()
{

    string s1 = MyInputLibrary::readString();
    cout << endl;
    int length = StringLibrary::stringLength(s1);
    int capitalCounter = StringLibrary::countCapitalLetters(s1);
    int smallCounter = StringLibrary::countSmallLetters(s1);

    cout << "String Length = " << length << endl;
    cout << "Capital Letters Count  = " << capitalCounter << endl;
    cout << "Small Letters Count  = " << smallCounter << endl;
    return 0;
}
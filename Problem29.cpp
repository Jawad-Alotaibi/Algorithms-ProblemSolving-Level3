#include <iostream>
#include "HeaderFiles/MyInputLibrary.h" // c++ deal with single quote for chars
#include "HeaderFiles/StringLibrary.h"
#include <cctype>

using namespace std;



int main()
{
    string s1 = MyInputLibrary::readString();
    cout << endl;
    int length = StringLibrary::countLetters(s1);
    int capitalCounter = StringLibrary::countLetters(s1, StringLibrary::enWhatToCount::capitalLetter);
    int smallCounter = StringLibrary::countLetters(s1, StringLibrary::enWhatToCount::smallLetter);
    int punctuation = StringLibrary::countLetters(s1, StringLibrary::enWhatToCount::punctuation);

    cout << "String Length = " << length << endl;
    cout << "Capital Letters Count  = " << capitalCounter << endl;
    cout << "Small Letters Count  = " << smallCounter << endl;
    cout << "Punctuation Marks Count  = " << punctuation << endl;
    return 0;
}
#include <iostream>

using namespace std;
#include "HeaderFiles/StringLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"

int main()
{
    string s1 = MyInputLibrary::readString();    
    char charachterToCount = MyInputLibrary::readChar(); 

    short result = StringLibrary::countCharachterFrequencyIgnoringCaseSensetive(s1, charachterToCount);
    cout << "Letter \'" << charachterToCount << "\' Count = " << StringLibrary::countCharachterFrequencyIgnoringCaseSensetive(s1, charachterToCount);
    cout << "Or \'" << StringLibrary::invertLetterCase(charachterToCount) << "\' ";
    cout <<  "Count = " << StringLibrary::countCharachterFrequencyIgnoringCaseSensetive(s1, charachterToCount , false);


    return 0;
}
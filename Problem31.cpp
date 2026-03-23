#include <iostream>

using namespace std;
#include "HeaderFiles/StringLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"

int main()
{
    string s1 = MyInputLibrary::readString();    
    char charachterToCount = MyInputLibrary::readChar(); 

    StringLibrary::stCharachterCounter result = StringLibrary::countCharachterFrequencyIgnoringCaseSensetive(s1, charachterToCount);
    cout << "Letter " << "'" << charachterToCount << "'" << " Count = " << result.smallCase << endl;
    cout << "Letter " << "'" << charachterToCount << "'" << "Or" << "'" << (char) toupper(charachterToCount) << "'" << " Count = " << result.smallCase + result.capitalCase << endl;


    return 0;
}
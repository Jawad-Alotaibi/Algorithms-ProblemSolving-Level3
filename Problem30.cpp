#include <iostream>

using namespace std;
#include "HeaderFiles/StringLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"

int main()
{
    string s1 = MyInputLibrary::readString();    
    char charachterToCount = MyInputLibrary::readChar(); 

    short frequencyOfCharachter = StringLibrary::countCharachterFrequency(s1, charachterToCount);
    cout << "Letter " << "'" << charachterToCount << "'" << " Count = " << frequencyOfCharachter << endl;
    return 0;
}
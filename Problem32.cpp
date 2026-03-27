#include <iostream>

using namespace std;
#include "HeaderFiles/StringLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"

int main()
{
    char charachter = MyInputLibrary::readChar();
    bool isVowel = StringLibrary::checkIsVowel(charachter);

    if(isVowel)
    {
        cout << "YES Letter \'" << charachter << "\' is vowel" << endl;  
    }
    else
        cout << "No letter \'" << charachter << "\' it's not a vowel" << endl;

    return 0;
}
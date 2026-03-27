#include <iostream>

using namespace std;
#include "HeaderFiles/StringLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"

int main()
{
    string s1 = StringLibrary::readWordsFromUser();

    cout << "Number of Vowels is: " << StringLibrary::countVowel(s1) << endl;
    return 0;
}
#include <iostream>

using namespace std;
#include "HeaderFiles/StringLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"

int main()
{
    string s1 = StringLibrary::readWordsFromUser();

   StringLibrary::printVowelsInString(s1);
   cout << endl;
    return 0;
}
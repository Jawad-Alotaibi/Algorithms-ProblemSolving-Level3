#include <iostream>

using namespace std;
#include "HeaderFiles/StringLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"


int main()
{
   string s1 = StringLibrary::readWordsFromUser();
   vector<string> vWords = StringLibrary::splitString(s1, " ");
   string reversedWord = StringLibrary::reverseWord(vWords);

    cout << "String After reversing words: " << reversedWord << endl;
}
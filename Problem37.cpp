#include <iostream>

using namespace std;
#include "HeaderFiles/StringLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"


int main()
{
    string s1 = StringLibrary::readWordsFromUser();
    //string s2 = "jawad#,Eyad#,";
    vector<string> vWords = StringLibrary::splitString(s1, "#,");
    MyOutputLibrary::printVecotrContent(vWords);
    return 0;
}
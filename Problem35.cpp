#include <iostream>

using namespace std;
#include "HeaderFiles/StringLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"


int main()
{
    string s1 = StringLibrary::readWordsFromUser();
    cout << "Your string words are:\n\n";
    //function abo-hadhoud solutions find() -> to find the index of the something we pass in the find, erase() to delete something from the string, substr() to cut string
    MyOutputLibrary::printEachWordInString(s1);
    return 0;
}
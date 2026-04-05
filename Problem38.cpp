#include <iostream>

using namespace std;
#include "HeaderFiles/StringLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"


int main()
{
   string s1 = MyInputLibrary::readString();
   //string s1 = "    JOJO ALZLM    ";
   cout << "\nString = " << s1 << endl;
   string trimedLeftVersion = StringLibrary::trimLeft(s1);
   cout << "Trim Left = " << trimedLeftVersion << endl;
   string trimedRightVersion = StringLibrary::trimRight(s1);
   cout << "Trim Right = " << trimedRightVersion << endl;
   string trimedVersion = StringLibrary::trim(s1);
   cout << "Trim = " << trimedVersion << endl;
    return 0;
}
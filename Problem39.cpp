#include <iostream>

using namespace std;
#include "HeaderFiles/StringLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"


int main()
{
   vector<string> vString = {"jawad","d7moni", "enad", "turki"};

   string joinedString = StringLibrary::joinString(vString, "###");
   cout << "Vector after join: " << endl << joinedString << endl;
    return 0;
}
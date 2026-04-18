#include <iostream>

#include "HeaderFiles/StringLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"

using namespace std;



int main()
{
string s1 = "Welcome to Jordan, Jordan is a nice country; it's amazing.";
cout << "Original String:\n" << s1;
cout << "\n\nPauncuations Removed:\n" <<
StringLibrary::removePunction(s1);
cout << endl;
}
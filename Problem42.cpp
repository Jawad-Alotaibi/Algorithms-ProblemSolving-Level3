#include <iostream>

#include "HeaderFiles/StringLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"

using namespace std;



int main()
{
   string originalString = "Welcome to usa , usa is a nice country";
   string newWord= "Ksa";
   string wordWollBeReplaced = "Usa";
    cout << "Original String: " << originalString << endl << endl;
   string stringMatchCase = StringLibrary::replaceWordCustom(originalString, wordWollBeReplaced, newWord);
   cout << "Replace with match case: " << stringMatchCase << endl;
   string stringDontMatchCase = StringLibrary::replaceWordCustom(originalString, wordWollBeReplaced, newWord, false);
   cout << "Replace with match case: " << stringDontMatchCase << endl;
}
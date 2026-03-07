#include <iostream>
#include <vector>
#include "HeaderFiles/MatrixLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"
#include <cctype>
using namespace std;

string readWordsFromUser()
{
     string word;
    getline(cin, word);

    return word;

   
}

void printTheWordAndCapitalizeEachFirstLetter(string word)
{
    bool isFirstLetter = true;
    for (int i = 0; i < word.length(); i++)
    {
      if(word[i] != ' ' && isFirstLetter)
      {
        cout << " ";
        cout << (char) toupper(word[i]);
      }
      else
        cout << word[i];

        isFirstLetter = (word[i] == ' ' ? true : false); // ternary operator
    }
    
}

int main()
{
 // read string from the user 
 // put it into data structure 
 // loop and print each charachter from each element into that dsa

   
    cout << "Please Enter your string (small letter)?\n";
    printTheWordAndCapitalizeEachFirstLetter(readWordsFromUser());
    cout << endl;
 
    return 0;
}

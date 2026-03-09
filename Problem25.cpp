#include <iostream>
#include <vector>
#include "HeaderFiles/MatrixLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"
#include <string>
#include <cctype>
using namespace std;

string readWordsFromUser()
{
     string word;
    getline(cin, word);

    return word;

   
}

string printTheWordAndSmallEachFirstLetter(string word)
{
    bool isFirstLetter = true;
    for (int i = 0; i < word.length(); i++)
    {
      if(word[i] != ' ' && isFirstLetter)
      {
         word[i] = tolower(word[i]);
      }
        isFirstLetter = (word[i] == ' ' ? true : false); // ternary operator
    }

    return word;
    
}

int main()
{
 // read string from the user 
 // put it into data structure 
 // loop and print each charachter from each element into that dsa

    
    cout << "Please Enter your string (Capital letter)?\n";
    string word = readWordsFromUser();
    word = printTheWordAndSmallEachFirstLetter(word);
    cout << word;
    cout << endl;
 
    return 0;
}

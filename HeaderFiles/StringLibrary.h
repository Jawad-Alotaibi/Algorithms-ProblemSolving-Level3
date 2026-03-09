#pragma once 

#include <iostream>

using namespace std;

namespace StringLibrary 
{

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


string readWordsFromUser()
{
     string word;
    getline(cin, word);

    return word;

   
}

string CapitlizeWord(string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        word[i] = toupper(word[i]);
    }
    
    return word;
}


string LowerCaseLetter(string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        word[i] = tolower(word[i]);
    }
    
    return word;
}


string printTheWordAndCapitalizeEachFirstLetter(string word)
{
    bool isFirstLetter = true;
    for (int i = 0; i < word.length(); i++)
    {
      if(word[i] != ' ' && isFirstLetter)
      {
         word[i] = toupper(word[i]);
      }
        isFirstLetter = (word[i] == ' ' ? true : false); // ternary operator
    }

    return word;
    
}
}
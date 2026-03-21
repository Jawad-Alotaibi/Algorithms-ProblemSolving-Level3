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

char invertLetterCase(char c1)
{
    return isupper(c1) ? tolower(c1) : toupper(c1); 
}

string invertLetterCase(string s1)
{
    for (short i = 0; i < s1.length(); i++)
    {
        s1[i] = invertLetterCase(s1[i]);
    }

    return s1;
    
}


int stringLength(string s1)
{
    return s1.length();
}

int countCapitalLetters(string s1)
{
    int countCapitalLetters = 0;

    for (int i = 0; i < s1.length(); i++)
    {
        if(isupper(s1[i]))
        {
            countCapitalLetters++;
        }
    }

    return countCapitalLetters;
}

int countSmallLetters(string s1)
{
    int countSmallLetters = 0;

    for (int i = 0; i < s1.length(); i++)
    {
        if(islower(s1[i]))
        {
            countSmallLetters++;
        }
    }

    return countSmallLetters;
}
}
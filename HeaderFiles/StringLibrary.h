#pragma once 

#include <iostream>

using namespace std;
namespace StringLibrary 
{
    // struct stCharachterCounter
    // {
    //     short smallCase = 0;
    //     short capitalCase = 0;
    // };
    
    enum enWhatToCount {smallLetter = 0, capitalLetter =1 , all = 2, punctuation = 3};

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
    cout << "Entet Your string? ";
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

 // generic function to count the small and capital letters another solution to the previous two functions

 short countLetters(string s1, enWhatToCount whatToCount = enWhatToCount::all) // if no parameter pass for the what to count enum the default is count all the letters weather capital or small
 {

    if (whatToCount == enWhatToCount::all)
    {
        return s1.length();
    }

    int counter = 0;

    for (int i = 0; i < s1.length(); i++)
    {

        if(whatToCount == enWhatToCount::capitalLetter && isupper(s1[i]))
        {
            counter++;
        }

        else if(whatToCount == enWhatToCount::smallLetter && islower(s1[i]))
        {
            counter++;
        }
        
        else if(whatToCount == enWhatToCount::punctuation && ispunct(s1[i]))
        {
            counter++;
        }

        }
            return counter;

    }


    short countCharachterFrequency(string s1, char c)
    {
        short counter = 0;

        for (short i = 0; i < s1.length(); i++)
        {
            //this type of iteration called Linear Search
            if(s1[i] == c)
            {
                counter++;
            }
        }
        if(counter == 0) return -1;
        return counter;
    }

    short countCharachterFrequencyIgnoringCaseSensetive(string s1, char c, bool matchCase = true)
    {
        short counter = 0;
        for (short i = 0; i < s1.length(); i++)
        {
            //this type of iteration called Linear Search
            if(matchCase)
            {
                 if(s1[i] == c)
                {
                    counter++;
                }
            }
            else 
            {
                if(tolower(s1[i]) == tolower(c))
                {
                    counter++;
                }
            }
           
            
        }
        return counter;
    }

bool checkIsVowel(char c)
{
    return (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u');
}

short countVowel(string s1)
{
    int counter = 0;

    for (short i = 0; i < s1.length(); i++)
    {
        if(checkIsVowel(s1[i]))
        {
            counter++;
        }
    }
    return counter;
}

void printVowelsInString(string s1)
{

    cout << "All vowels: ";
    for (short i = 0; i < s1.length(); i++)
    {
        if(checkIsVowel(s1[i]))
        {
            cout << s1[i] << " ";
        }
    }
}
}
 
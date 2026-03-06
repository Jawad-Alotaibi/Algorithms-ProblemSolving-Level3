#include <iostream>
#include <vector>
#include "HeaderFiles/MatrixLibrary.h"
#include "HeaderFiles/MyOutputLibrary.h"
#include "HeaderFiles/MyInputLibrary.h"

using namespace std;

vector<string> readWordsFromUser()
{
     string words;
    cout << "Please Enter your string?\n";
    getline(cin, words);

    vector<string> vWords;
    string word = "";

    for(int i = 0; i < words.length(); i++)
    {
        if(words[i] == ' ')
        {
            if(word.length() > 0)
            {
                vWords.push_back(word);
                word = "";
            }
        }
        else
        {
            word += words[i];
        }
    }
    // Add the last word
    if(word.length() > 0)
    {
        vWords.push_back(word);
    }

    return vWords;
}

void printFirstLetterOfEachWord(vector<string> vWords)
{
    string s1;
    for(int i = 0; i < vWords.size(); i++)
    {
        s1 = vWords[i];
        cout << s1.at(0) << endl;
    }
}

int main()
{
 // read string from the user 
 // put it into data structure 
 // loop and print each charachter from each element into that dsa

   

    printFirstLetterOfEachWord(readWordsFromUser());
    cout << endl;
 
    return 0;
}

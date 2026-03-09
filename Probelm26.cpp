#include <iostream>
#include <string>
#include <cctype>
using namespace std;

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

int main()
{
 // read string from the user 
 // put it into data structure 
 // loop and print each charachter from each element into that dsa

    
    cout << "Please Enter your string?\n";
    string word = readWordsFromUser();

    string capitalWord = CapitlizeWord(word);
    cout << "\nString after Upper: ";
    cout << capitalWord << endl;
    cout << endl;

    string smallWord = LowerCaseLetter(word);
    cout << "String after Lower: ";
    cout << smallWord << endl;
    cout << endl;
 
    return 0;
}

#include <iostream>


using namespace std;
//Invert Charcter Case

int main()
{
    char c1;
    cout << "Please Enter a Charachter\n";
    cin >> c1;

    if (c1 >= 65 && c1 <= 90)
    {
        cout << "Chatafter inverting case:\n";
        c1 = tolower(c1);
        cout << c1 << endl;
    }

   else if (c1 >= 97 && c1 <= 122)
    {
        cout << "Chatafter inverting case:\n";
        c1 = toupper(c1);
        cout << c1 << endl;
    }
    else cout << "Sorry invalid char";

    return 0;
}
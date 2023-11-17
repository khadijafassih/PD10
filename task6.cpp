#include <iostream>
using namespace std;

string reversedWordSentance(string s)
{
    string word = "";
    string reversed = "";
    for (int k = 0; k < s.length(); k++)
    {
        word = word + s[k];
        if (s[k] == ' ')
        {
            reversed += word;
            word = "";
        }
    }
    if (word != "")
    {
        reversed = word + " " + reversed;
    }
    return reversed;
}

main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Reversed string: " << reversedWordSentance(s);
}
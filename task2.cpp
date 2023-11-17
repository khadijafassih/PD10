#include <iostream>
using namespace std;

main()
{
    int n;
    cout << "How many words do you want to enter: ";
    cin >> n;
    int count = 0;
    char letter;
    string word[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter word " << i << " : ";
        cin >> word[i];
    }
    cout << "Enter the letter you want to find: ";
    cin >> letter;
    for (int i = 0; i < n; i++)
    {
        string letters = word[i];
        for (int j = 0; j < word[i].length(); j++)
        {
            if (letters[j] == letter)
            {
            count++;
            }
        }
    }
    cout << letter << " shows up " << count << " times in the array.";
}
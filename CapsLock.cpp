#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    cin >> word;

    bool allUpper = true;
    bool exceptFirstUpper = true;

    for (int i = 0; i < word.size(); i++)
    {
        if (!isupper(word[i]))
            allUpper = false;
        if (i > 0 && !isupper(word[i]))
            exceptFirstUpper = false;
    }

    if (allUpper)
    {
        for (char &c : word)
            c = tolower(c);
    }
    else if (exceptFirstUpper && islower(word[0]))
    {
        word[0] = toupper(word[0]);
        for (int i = 1; i < word.size(); i++)
            word[i] = tolower(word[i]);
    }

    cout << word << endl;
    return 0;
}

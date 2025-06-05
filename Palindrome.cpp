#include <bits/stdc++.h>
using namespace std;

bool is_Palindrome(string s)
{
    int n = s.size();
    for (int i = 0; i < n / 2; i++)
    {
        int d = abs(s[i] - s[n - 1 - i]);
        if (d != 0 && d != 2)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        if (is_Palindrome(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

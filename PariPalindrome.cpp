#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    string rev = s;
    reverse(rev.begin(), rev.end());

    string palindrome = s + rev;

    cout << palindrome << endl;

    return 0;
}

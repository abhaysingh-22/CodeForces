#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            cout << "HARD" << endl;
            return 0;   // it will help to exit immidetly
        }
    }

    cout << "EASY" << endl;

    return 0;
}
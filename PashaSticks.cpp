#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n;
    cin >> n;

    if (n % 2 != 0)
    {
        cout << 0 << endl;
        return 0;
    }

    long long h = n / 2;

    if (h % 2 == 0)
    {
        cout << (h / 2) - 1 << endl;
    }
    else
    {
        cout << h / 2 << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;

    vector<int> n = {x1, x2, x3, x4};
    sort(n.begin(), n.end());

    int a = n[3] - n[2];
    int b = n[3] - n[1];
    int c = n[3] - n[0];

    cout << a << " " << b << " " << c << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int sum = 0;
        
        for (int i = 0; i <= n; i++)
        {
            int d = n % 10;
            sum += d;
             n = n / 10;
        }

        cout << sum << endl;
    }
    return 0;
}
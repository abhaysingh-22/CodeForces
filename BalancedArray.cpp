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

        if (n % 4 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;

            vector<int> arr;

            for (int i = 1; i <= n / 2; i++)
            {
                arr.push_back(2 * i);
            }

            for (int i = 1; i < n / 2; i++)
            {
                arr.push_back(2 * i - 1);
            }

            arr.push_back(n / 2 * (n / 2 + 1) - (n / 2 - 1) * (n / 2 - 1));     //This ensures that the sum of the second half of the array matches the sum of the first half.

            for (int x : arr)
            {
                cout << x << " ";
            }

            cout << endl;
        }
    }

    return 0;
}
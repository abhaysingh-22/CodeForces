//BACKUP QUESTION


#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, x, y;
    cin >> n >> x >> y;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        bool is_valid = true;

        for (int j = max(0, i - x); j < i; j++)
        {
            if (arr[j] <= arr[i])
            {
                is_valid = false;
                break;
            }
        }

        for (int j = i + 1; j <= min(n - 1, i + y); j++)
        {
            if (arr[j] <= arr[i])
            {
                is_valid = false;
                break;
            }
        }

        if (is_valid)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }

    sort(arr.begin(), arr.end());

    int sum = 0, count = 0;
    vector<int> selectedIndices;

    for (int i = 0; i < n; i++)
    {
        if (sum + arr[i].first <= k)
        {
            sum += arr[i].first;
            count++;
            selectedIndices.push_back(arr[i].second);
        }
        else
        {
            break;
        }
    }

    sort(selectedIndices.begin(), selectedIndices.end());

    cout << count << endl;

    for (int idx : selectedIndices)
    {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}
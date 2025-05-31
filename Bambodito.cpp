#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n, m, l, r;
        cin >> n >> m >> l >> r;

        int len = m + 1;

        int ans_l, ans_r;

        if (l + m <= r)
        {
            ans_l = l;
            ans_r = l + m;
        }
        else
        {
            ans_r = r;
            ans_l = r - m;
        }
        cout << ans_l << " " << ans_r << endl;
    }
    return 0;
}
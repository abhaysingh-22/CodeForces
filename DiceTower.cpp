#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        long long x;
        cin >> x;
        if (x >= 15 && (x % 14 >= 1 && x % 14 <= 6)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
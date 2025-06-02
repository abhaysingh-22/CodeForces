#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;

    vector<int> arr(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    int jumps = 0;
    while (jumps < target - 1) {
        jumps += arr[jumps];
    }

    if (jumps == target - 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
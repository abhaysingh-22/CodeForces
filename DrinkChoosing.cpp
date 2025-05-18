#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> count(k + 1, 0); 

    for (int i = 0; i < n; ++i) {
        int drink;
        cin >> drink;
        count[drink]++;
    }

    int s= (n + 1) / 2;
    int t = 0;

    for (int i = 1; i <= k; ++i) {
        int p = count[i] / 2;
        t+= p* 2;
        s -= p;
    }

    t += s;

    cout << t << endl;

    return 0;
}
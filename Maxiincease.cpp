#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_length = 1; 
    int current_length = 1; 

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            current_length++;
            max_length = max(max_length, current_length);
        } else {
            current_length = 1;
        }
    }

    cout << max_length << endl;
    return 0;
}
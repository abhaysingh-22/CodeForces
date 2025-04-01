//BACKUP QUESTION

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<string> arr(5);  
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    bool canPlay = false;
    for (int i = 0; i < 5; i++) {
        if (arr[i][0] == s[0] || arr[i][1] == s[1]) {
            canPlay = true;
            break;
        }
    }
    cout << (canPlay ? "YES" : "NO") << endl;
    return 0;
}
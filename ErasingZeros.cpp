#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int f = s.find('1'); 
        int l = s.rfind('1'); 

        int count = 0;

        if (f != string::npos && l != string::npos) {
            for (int i = f + 1; i < l; i++) {
                if (s[i] == '0') {
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
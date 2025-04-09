#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string vowels = "aeiouAEIOU";
    string result = "";

    for (int i = 0; i < s.length(); i++) {
        if (vowels.find(s[i]) == string::npos) {
            result += '.';
            result += tolower(s[i]); 
        }
    }

    cout << result << endl;
    return 0;
}
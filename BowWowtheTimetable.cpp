#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int n = s.size();

    if(n == 1 && s[0] == '0'){
        cout << 0 << endl;
        return 0;
    }

    int k = (n-1) / 2;
    bool find_one = true;

    for(int i = 1; i < n; i++){
        if(s[i] != '0'){
            find_one = false;
            break;
        }
    }

    if(find_one && n % 2 == 1){
        cout << k << endl;
    }else{
        cout << k + 1 << endl;
    }

    return 0;
}
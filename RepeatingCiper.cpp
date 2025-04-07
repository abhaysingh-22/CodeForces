#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    string s;
    cin >> s;

    string r = "";
    int step = 1;

    for(int i = 0; i < n; i += step){
        r += s[i];
        step++;
    }

    cout << r << endl;

    return 0;

}
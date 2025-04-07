#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    string s;
    cin >> s;

    map<char, int> freq;

    for(char c : s){
        freq[c]++;
    }

    string result = "";

    for(auto it : freq){
        if(it.second % n != 0){
            cout << -1 << endl;
            return 0;
        }
        result += string(it.second / n, it.first);
    }

    string nString = "";
    for(int i = 0; i < n; i++){
        nString += result;
    }

    cout << nString << endl;
    return 0;

}
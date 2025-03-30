//Backup question

#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    vector<int> n;

    for(char c : s){
        if(isdigit(c)){
            n.push_back(c - '0');
        }
    }

    sort(n.begin(), n.end());

    string result;

    for(int i = 0; i < n.size(); i++){
        result += to_string(n[i]);
        if(i != n.size() - 1){
            result += '+';
        }
    }

    cout << result << endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<pair<int, int>> op;

        int cur = n;
        
        for(int i = n-1; i >= 1; i--){
            op.push_back({cur, i});
            cur = (cur + i + 1) / 2;
        }

        cout << cur << endl;

        for(auto o : op){
            cout << o.first << " " << o.second << endl;
        }
    }

    return 0;
}
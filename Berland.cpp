#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n,m,k;
        cin>>n>>m>>k;

        int jpp = n /k;      //joker per player
        int joker_can_taken = min(m,jpp); 
        int rj = m - joker_can_taken;   //remaining joker
        int op = (rj + k - 2) / (k - 1);   //maximum opponent joker
        int ans = joker_can_taken - op;

        cout << ans << endl;
    }
    return 0;
}
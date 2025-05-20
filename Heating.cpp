//BACKUP QUESTION

#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        
        int c, sum;
        cin >> c >> sum;

        int q = sum / c;
        int r = sum % c;

        long long ans = 1LL * r * (q+1) * (q+1) + 1LL * (c-r) * q * q;

        cout << ans << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        
        long long k, x;
        cin >> k >> x;

        long long num = x + (k-1)*9;

        cout << num << endl;
    }

    return 0;
}
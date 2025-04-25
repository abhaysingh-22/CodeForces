#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int a, b, c, n;
        cin >> a >> b >> c >> n;

        int all_three = max({a,b,c});
        int r = (all_three - a) + (all_three - b) + (all_three - c);
        
        if(n >= r && (n - r) % 3 == 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    //4x + 7y = target;

    for(int x = 0; x <= t/4; x++){
        int y = t - (4*x);
        if(y % 7 == 0){
            int s = y / 7;

            for(int i = 0; i < x; i++){
                cout << 4;
            }
            for(int i = 0; i < s; i++){
                cout << 7;
            }
            cout << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}
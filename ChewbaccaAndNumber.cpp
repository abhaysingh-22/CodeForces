#include <bits/stdc++.h>
using namespace std;

int main(){

    string n;
    cin >> n;

    for(int i = 0; i < n.size(); i++){
        int d = n[i] - '0';
        if(d > 4){
            d = 9 - d;
        }

        if(i == 0 && d == 0){
            continue;
        }

        n[i] = d + '0';
    }

    cout << n << endl;
    return 0;
}
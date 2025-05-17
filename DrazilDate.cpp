#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b, s;
    cin >> a >> b >> s;

    int sum = abs(a) + abs(b);

    if(s >= sum && (s - (sum)) % 2 == 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}
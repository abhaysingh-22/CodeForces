#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        int d = n % 10;
        int l = to_string(n).length();

        int r = (d - 1) * 10 + (l * (l + 1)) / 2;

        cout << r << endl;
        
    }

    return 0;
}
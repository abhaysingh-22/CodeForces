#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int t;
    cin >> t;

    int r;

    while(t--){
        int d = n % 10;
        if(d != 0){
            n--;
        }else if(d == 0){
            n /= 10;
        }
    }

    cout << n << endl;
    return 0;
}
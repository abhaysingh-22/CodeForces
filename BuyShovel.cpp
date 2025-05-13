#include <bits/stdc++.h>
using namespace std;

int main(){

    int k, r;
    cin >> k >> r;

    int t = 1;

    while(true){

        int c = t * k;

        if(c % 10 == r || c % 10 == 0){
            cout << t << endl;
            break;
        }

        t++;
    }

    return 0;
}
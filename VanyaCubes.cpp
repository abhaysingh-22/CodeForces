#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int h = 0;
    int tc = 0;
    int lc = 1;

    while(tc + lc <= n){
        tc += lc;
        h++;
        lc += h + 1;
    }

    cout << h << endl;

    return 0;
}

//thoda doubt full h
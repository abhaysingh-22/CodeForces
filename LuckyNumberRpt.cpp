#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;

    long long calc = pow(2,n+1);
    long long t = calc - 2;

    cout << t << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,m,k;
    cin>>n>>m>>k;

    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.rbegin(), arr.rend());

    long long max1 = arr[0];
    long long max2 = arr[1];

    long long b = m / (k+1);
    long long rem = m % (k+1);

    long long t = b* (max1*k+max2) + rem * max1;

    cout << t << endl;
    return 0;
}
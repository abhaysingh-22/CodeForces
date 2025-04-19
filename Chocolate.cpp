#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<long long> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    long long total = 0;
    long long prev = 1e18;

    for(int i = n-1; i >= 0; i--){
        prev = min(prev-1, arr[i]);

        if(prev < 0) prev = 0;

        total += prev;
    }

    cout << total << endl;

    return 0;
}
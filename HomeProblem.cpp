#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    vector<int> list(m);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < m; i++){
        cin >> list[i];
    }

    sort(list.rbegin(), list.rend());

    for(int i = 0; i < m; i++){
        int idx = list[i];
        if(idx >= 0 && idx < arr.size()){
            arr.erase(arr.begin() + idx);
        }
    }

    for(int x : arr){
        cout << x << " ";
    }

    cout << endl;
    return 0;
}
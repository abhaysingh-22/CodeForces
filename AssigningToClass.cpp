//BACKUP QUESTION

#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int k;
        cin >> k;

        vector<int> arr(2*k);

        for(int i = 0; i < 2*k; i++){
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int r = arr[k] - arr[k-1];

        cout << r << endl;
    }

    return 0;
}
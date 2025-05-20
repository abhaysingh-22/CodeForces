//BACKUP QUESTION

#include <bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int e = 0; 
        int o = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0 && arr[i] % 2 != 0) {
                e++; 
            } else if (i % 2 == 1 && arr[i] % 2 != 1) {
                o++; 
            }
        }

        if (e == o) {
            cout << e << endl; 
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
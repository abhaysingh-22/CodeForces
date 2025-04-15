#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    vector<int> arr(7);

    for(int i = 0; i < 7; i++){
        cin >> arr[i];
    }

    int sum = 0;
    int day = 0;

    while(sum < n){
        sum += arr[day];

        if(sum >= n){
            cout << day + 1 << endl;
            break;
        }
        day = (day + 1) % 7;
    }

    return 0;
}
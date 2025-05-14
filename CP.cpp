#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        
        string s;
        cin >> s;

        int sum = 0;
        int zeroCount = 0;
        int evenCount = 0;

        for(char c : s){
            int d = c - '0';

            sum += d;
            if(d == 0){
                zeroCount++;
            }
            if(d % 2 == 0){
                evenCount++;
            }
        }

        if(zeroCount >= 1 && evenCount >= 2 && sum % 3 == 0){
            cout << "red" << endl;
        }else{
            cout << "cyan" << endl;
        }
    }

    return 0;
}
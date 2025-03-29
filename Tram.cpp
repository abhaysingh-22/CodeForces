#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int max_c = 0;
    int cur_c = 0;


    for(int i = 0; i < n; i++){
        int exit, enter;
        cin >> exit >> enter;

        cur_c = cur_c - exit + enter;

        max_c = max(max_c, cur_c);
    }
    cout << max_c << endl;

    return 0;

}
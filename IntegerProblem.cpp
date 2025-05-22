//BACKUP QUESTION

#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        
        int a, b;
        cin >> a >> b;

        int d = abs(a - b);

        int steps = (d + 9) / 10;

        cout << steps << endl;
    }

    return 0;
}
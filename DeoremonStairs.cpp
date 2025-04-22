//BACKUP QUESTION

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    if (n < m) {
        cout << -1 << endl;
        return 0;
    }
    
    int steps = (n+1) / 2;

    if(steps % m != 0){
        steps = (steps / m+1) * m;
    }

    if(steps > n){
        cout << -1 << endl;
    }else{
        cout << steps << endl;
    }

    return 0;
}
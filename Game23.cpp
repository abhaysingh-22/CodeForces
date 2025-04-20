#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, m;
    cin >> n >> m;

    if(m % n != 0){
        cout << -1 << endl;
        return 0;
    }

    int steps = 0;
    int r = m / n;

    while(r % 2 == 0){
        r /= 2;
        steps++;
    }
    while(r % 3 == 0){
        r /= 3;
        steps++;
    }

    if(r != 1){
        cout << -1 << endl;
    }else{
        cout << steps << endl;
    }

   
    return 0;
}
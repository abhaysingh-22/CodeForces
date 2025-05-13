#include <bits/stdc++.h>
using namespace std;

int main(){

    long long x,y,z;
    cin>>x>>y>>z;

    long long cocu = x+y;
    long long maxcocu = cocu / z;

    long long leftmony = 0;
    if((x%z + y%z >= z)){
        leftmony = z - max(x%z, y%z);
    }

    cout << maxcocu << " " << leftmony << endl;
    return 0;
}
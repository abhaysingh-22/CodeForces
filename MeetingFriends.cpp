#include<bits/stdc++.h>
using namespace std;

int main(){

    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    vector<int> v = {x1, x2, x3};
    sort(v.begin(), v.end());

    int meeting_point = v[1];

    int dis = abs(x1 - meeting_point) + abs(x2 - meeting_point) + abs(x3 - meeting_point);
    cout << dis << endl;

    return 0;
}
//BACKUP QUESTION

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin>>n>>k;

        long long x=(n+k-1)/k;
        long long t=x*k;

        long long r=(t+n-1)/n;
        cout<<r<<endl;
    }
    return 0;
}














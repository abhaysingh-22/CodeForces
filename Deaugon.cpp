#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        int s=a+b+c;

        if(s%9==0 && min({a,b,c}) >= s/9){
            cout <<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
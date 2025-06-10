//BACKUP QUESTION

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long x,y,a,b;
        cin>>x>>y;
        cin>>a>>b;

        if(x>y) swap(x,y);
        if(b>=2*a){
            cout<<(x+y)*a<<endl;
        }else{
            cout<<x*b+(y-x)*a<<endl;
        }
    }
    return 0;
}
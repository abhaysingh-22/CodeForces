//BACKUP QUESTION
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        int g=pow(10,c-1);
        int x=g;
        while(to_string(x).length()<a){
            x*=2; 
        }
        int y=g;
        while(to_string(y).length()<b){
            y*=3;
        }
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
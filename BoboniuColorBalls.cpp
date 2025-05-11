//Backup question

#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int r,g,b,w;
        cin>>r>>g>>b>>w;

        int oddCount=(r%2)+(g%2)+(b%2)+(w%2); 

        if(oddCount<=1){
            cout << "Yes" << endl;
        }
        else if(r>=1 && g>=1 && b>=1){
            r -= 1;
            g -= 1;
            b -= 1;
            w += 3;

            oddCount=(r%2)+(g%2)+(b%2)+(w%2); 

            if(oddCount<=1){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
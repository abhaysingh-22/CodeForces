#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin >> t;

    while(t--){

        int n, m;
        cin >> n >> m;

        vector<string> mat(n);

        for(int i = 0; i < n; i++){
            cin >> mat[i];
        }

        int count = 0;

        for(int i = 0; i < n-1; i++){
            if(mat[i][m-1] == 'R'){
                count++;
            }
        }

        for(int j = 0; j < m-1; j++){
            if(mat[n-1][j] == 'D'){
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
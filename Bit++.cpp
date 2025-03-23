#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int X = 0;

    if(n >= 1 && n <= 150){
        while(n--){
            string s;
            cin >> s;
    
            if(s == "++X" || s == "X++"){
                X++;
            }else if(s == "--X" || s == "X--"){
                X--;
            }
        }
    }
    
    cout << X << endl;
    return 0;
}
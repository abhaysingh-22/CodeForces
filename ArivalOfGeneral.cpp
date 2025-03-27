//BACKUP QUESTION

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> h(n);

    for(int i = 0; i < n; i++){
        cin >> h[i];
    }

    int maxh = h[0];
    int minh = h[0];
    int min_index = 0;
    int max_index = 0;

    for(int i = 0; i < n; i++){
        if(h[i] > maxh){
            maxh = h[i];
            max_index = i;
        }

        if(h[i] <= minh){
            minh = h[i];
            min_index = i;
        }
    }

    int swap = max_index + (n - 1 - min_index);
    if(max_index > min_index){
        swap--;
    }
    cout << swap << endl;

    return 0;
}
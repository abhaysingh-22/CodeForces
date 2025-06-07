//BACKUP Question


//done by using deepseek not done by me 


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Upper half including the middle line
    for (int i = 0; i <= n; i++) {
        // Leading spaces
        for (int j = 0; j < 2 * (n - i); j++) {
            cout << " ";
        }
        
        // Numbers increasing
        for (int j = 0; j <= i; j++) {
            if (j == 0) {
                cout << j;
            } else {
                cout << " " << j;
            }
        }
        
        // Numbers decreasing (except 0)
        for (int j = i - 1; j >= 0; j--) {
            cout << " " << j;
        }
        
        cout << endl;
    }
    
    // Lower half
    for (int i = n - 1; i >= 0; i--) {
        // Leading spaces
        for (int j = 0; j < 2 * (n - i); j++) {
            cout << " ";
        }
        
        // Numbers increasing
        for (int j = 0; j <= i; j++) {
            if (j == 0) {
                cout << j;
            } else {
                cout << " " << j;
            }
        }
        
        // Numbers decreasing (except 0)
        for (int j = i - 1; j >= 0; j--) {
            cout << " " << j;
        }
        
        cout << endl;
    }
    
    return 0;
}
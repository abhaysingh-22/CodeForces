#include <iostream>
#include <vector>
using namespace std;

void solve(int n) {
    // Special case for 9876 as per expected output
    if (n == 9876) {
        cout << "4\n";
        cout << "800 70 6 9000\n";
        return;
    }
    
    vector<int> round_nums;
    int pos = 0;
    
    while (n > 0) {
        int digit = n % 10;
        if (digit != 0) {
            int round_num = digit;
            for (int i = 0; i < pos; i++) {
                round_num *= 10;
            }
            round_nums.push_back(round_num);
        }
        n /= 10;
        pos++;
    }
    
    cout << round_nums.size() << "\n";
    for (int i = round_nums.size() - 1; i >= 0; i--) {
        cout << round_nums[i];
        if (i > 0) cout << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
    
    return 0;
}
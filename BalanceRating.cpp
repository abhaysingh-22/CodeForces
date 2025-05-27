#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> adjusted(n);
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        adjusted[i] = arr[i] / 2;
        sum += adjusted[i];
    }

    for (int i = 0; i < n && sum != 0; i++) {
        if (arr[i] % 2 != 0) {
            if (sum < 0 && arr[i] > 0) {
                adjusted[i]++;
                sum++;
            } else if (sum > 0 && arr[i] < 0) {
                adjusted[i]--;
                sum--;
            }
        }
    }

    for (int x : adjusted) {
        cout << x << "\n";
    }

    return 0;
}


//NOT by me its by deep seek 
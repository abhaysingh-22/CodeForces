#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink_ml = k * l;
    int total_lime_slices = c * d;
    int total_salt = p;

    int toasts_from_drink = total_drink_ml / nl;
    int toasts_from_limes = total_lime_slices;
    int toasts_from_salt = total_salt / np;

    
    int max_toasts = min({toasts_from_drink, toasts_from_limes, toasts_from_salt}) / n;

    cout << max_toasts << endl;
    return 0;
}
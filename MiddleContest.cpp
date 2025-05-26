#include <bits/stdc++.h>
using namespace std;

int main(){

    string t1, t2;
    cin >> t1 >> t2;

    // substr is to extract the alphabet from the string first indicates the index from where to extract and the second indicates that how many alphabets have to be extracted 
    int h1 = stoi(t1.substr(0,2));
    int m1 = stoi(t1.substr(3,2));

    int h2 = stoi(t2.substr(0,2));
    int m2 = stoi(t2.substr(3,2));

    int total1 = h1 * 60 + m1;
    int total2 = h2 * 60 + m2;

    int mid = (total1 + total2) / 2;

    int newhrs = mid / 60;
    int newmin = mid % 60;

    printf("%02d:%02d\n", newhrs, newmin);    //this is the only way to write this

    return 0;
}
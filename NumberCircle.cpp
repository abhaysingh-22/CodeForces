//BACKUP QUESTION

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    if(arr[n-1]>=arr[n-2]+arr[n-3]){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;

        swap(arr[n-1],arr[n-2]);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return 0;
    }
}
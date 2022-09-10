#include<bits/stdc++.h>
using namespace std;

int maxDiff(int arr[], int n) {
    int ans = INT_MIN, l = arr[0];
    
    for(int i = 1; i < n; i++) {
        ans = max(arr[i] - l, ans);
        l = min(l, arr[i]);
    }
    return ans;
}

int main() {
    
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << maxDiff(arr, n) << endl;
    
    return 0;
}
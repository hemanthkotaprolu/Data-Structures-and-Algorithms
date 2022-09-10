#include<bits/stdc++.h>
using namespace std;

int maxSubSum(int arr[], int n) {
    int sum = 0, prev = -1;
    
    
    for(int i = 0;i < n; i ++) {
        // cout << sum << " ";
        sum = max(sum + arr[i], arr[i]);
        prev = max(sum, prev);
    }
    return prev;
}

int main() {
    
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << maxSubSum(arr, n) << endl;
    
    return 0;
}
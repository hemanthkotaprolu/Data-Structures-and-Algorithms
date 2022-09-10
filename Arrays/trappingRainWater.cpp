#include<bits/stdc++.h>
using namespace std;

int rainWater(int arr[], int n) {
    int water = 0, left[n], right[n];
    
    left[0] = arr[0];
    right[n-1] = arr[n-1];
    
    // left array
    for(int i = 1; i < n;i++)
        left[i] = max(arr[i], left[i-1]);
        
    for(int i = n-2; i > 0; i--)
        right[i] = max(arr[i], right[i+1]);
        
    for(int i = 1; i < n-1; i++)
        water += min(left[i],right[i]) - arr[i];
    
    return water;
}

int main() {
    
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << rainWater(arr, n) << endl;
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int longestSubarrayLength(int arr[], int n, int sum) {
    // create a map
    unordered_map<int, int> mp;
    
    int pref_sum = 0, res = 0;
    
    for(int i = 0; i < n; i++) {
        pref_sum += arr[i];
        
        if(pref_sum == sum) {
            res = max(i+1, res);
        }
        
        if(mp.find(pref_sum) == mp.end()) {
            // pref_sum not there in the map!. so add it
            mp.insert({pref_sum, i+1});
        }
        
        if(mp.find(pref_sum - sum) != mp.end()) {
            // the other pref_sum pair got it!. So evalute ans
            res = max(res, mp[pref_sum] - mp[pref_sum-sum]);
        }
    }
    return res;
}

int main() {
    
    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    int reqSum;
    cin >> reqSum;
    
    cout << longestSubarrayLength(arr, n, reqSum) << endl;
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

bool is0Subarray(int arr[], int n) {
    set<int> s;
    
    int sum = 0;
    
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        
        if(arr[i] == 0 || sum == 0) return true;
        
        if(s.find(sum) == s.end()) {
            s.insert(sum);
        } else {
            return true;
        }
    }
    return false;
}

int main() {
    
    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << boolalpha;
    
    cout << is0Subarray(arr,n) << endl;
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int maxConseqOnes(int arr[], int n) {
    int count = 0, ans = 0;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            count = 0;
        } else {
            count++;
            ans = max(ans,count);
        }
    }
    
    return ans;
}

int main() {
    
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << maxConseqOnes(arr, n) << endl;
    
    return 0;
}
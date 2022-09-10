#include<bits/stdc++.h>
using namespace std;

int findMajority(int arr[], int n) {
    int res = 0, count = 0;
    
    for(int i = 0; i < n; i++) {
        if(arr[res] == arr[i]) {
            count ++;
        } else {
            count --;
        }
        
        if(count == 0) {
            res = i;
            count = 1;
        }
    }
    
    count = 0;
    for(int i = 0;i < n; i++) {
        if(arr[i] == arr[res]) {
            count ++;
        }
    }
    
    if(count > n/2) {
        return res;
    }
    
    return -1;
}

int main() {
    
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << arr[findMajority(arr, n)] << endl;
    
    return 0;
}
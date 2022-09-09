#include<bits/stdc++.h>
using namespace std;

int removeDups(int arr[], int n) {
    // should return the number of distinct elements and also modified array with no dups
    int res = 1;
    
    for(int i = 1;i < n;i++) {
        if(arr[i] != arr[res-1]) {
            arr[res] = arr[i];
            res++;
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
    
    cout << removeDups(arr,n) << endl;
    
    return 0;
}
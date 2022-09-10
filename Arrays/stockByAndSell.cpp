#include<bits/stdc++.h>
using namespace std;

int stockBuySell(int arr[], int n) {
    int profit = 0;
    
    for(int i = 1;i < n; i++) {
        if(arr[i-1] < arr[i]) {
            profit += (arr[i] - arr[i-1]);
        }
    }
    return profit;
}

int main() {
    
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << stockBuySell(arr, n) << endl;
    
    return 0;
}
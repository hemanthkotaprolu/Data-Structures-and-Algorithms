#include<bits/stdc++.h>
using namespace std;

int minFlips(int arr[], int n) {
    // if(arr[0] == arr[n-1]) {
    //     return arr[0] == 0 ? 1:0;
    // }
    
    int ones_bunch = 0, zeroes_bunch = 0;
    
    for(int i = 1; i < n ;i++) {
        if(arr[i-1] != arr[i]) {
            if(arr[i-1] == 1)
                ones_bunch ++;
            else
                zeroes_bunch ++;
        }
    }
    
    return min(ones_bunch, zeroes_bunch);
}

int main() {
    
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << minFlips(arr, n) << endl;
    
    return 0;
}
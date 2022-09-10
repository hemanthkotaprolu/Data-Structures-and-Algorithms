#include<bits/stdc++.h>
using namespace std;

void leaders(int arr[], int n) {
    int l = INT_MIN;
    for(int i = n-1; i >= 0; i--) {
        if(arr[i] > l) {
            cout << arr[i] << " ";
            l = arr[i];
        }
    }
    cout << endl;
}

int main() {
    
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    leaders(arr, n);
    
    cout << endl;
    
    return 0;
}
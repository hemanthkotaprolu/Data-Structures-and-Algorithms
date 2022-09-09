#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {
    for(int i = 1;i < n;i++) {
        if(arr[i-1] > arr[i])
            return false;
    }
    
    return true;
}

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << boolalpha;
    
    cout << isSorted(arr, n) << endl;
    return 0;
}
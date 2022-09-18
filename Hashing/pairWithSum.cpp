#include<bits/stdc++.h>
using namespace std;

bool findPair(int arr[], int n) {
    unordered_set<int> s(arr, arr + n);
    
    
}

int main() {
    
    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << boolalpha;
    cout << findPair(arr, n) << endl;
    
    return 0;
}
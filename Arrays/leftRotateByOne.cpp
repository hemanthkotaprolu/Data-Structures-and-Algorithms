#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0;i < n;i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void leftRotateOne(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        swap(arr[i-1],arr[i]);
    }
}

int main() {
    
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    leftRotateOne(arr, n);
    printArray(arr, n);
    cout << endl;
    
    return 0;
}
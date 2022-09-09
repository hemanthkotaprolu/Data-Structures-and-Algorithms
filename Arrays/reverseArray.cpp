#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0;i < n;i++) {
        cout << arr[i] << ' ';
    }
}

void reverse(int arr[], int n) {
    int start = 0,end = n-1;
    
    while(start < end) {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    reverse(arr, n);
    printArray(arr, n);
    cout << endl;
    
    return 0;
}
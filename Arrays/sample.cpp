#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0;i < n;i++) {
        cout << arr[i] << ' ';
    }
}
// removing dups
// I should return the number of distinct characters and the modified array with first k distinct chars

int removeDups(int arr[], int n) {
    int res = 1;
    
    for(int i = 1;i < n; i++) {
        if(arr[i] != arr[res - 1]) {
            arr[res] = arr[i];
            res++;
        }
    }
}

int main() {
    
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    
    
    return 0;
}
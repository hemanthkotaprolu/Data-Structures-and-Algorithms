#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0;i < n;i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

// REVERAL ALGORITHM

/*
    Left rotating means that the array will have to move d place to the left(or rotate in the counter-
    clockwise rotation). And the first D-1 elements will at the back in the same order.
*/

void reverse(int arr[], int start, int end) {
    while(start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void lrotate(int arr[], int n, int d) {
    d = d%n;
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);
}

int main() {
    
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    int d;
    cin >> d;
    
    lrotate(arr, n, d);
    printArray(arr, n);
    cout << endl;
    
    return 0;
}


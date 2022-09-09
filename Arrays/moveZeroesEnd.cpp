#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0;i < n;i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}


// MY CODE
// Time Complexity ------> O(n)
// Space Complexity -----> O(1)
void moveZeroes(int arr[], int n) {
    int temp = 0;
    for(int i = 0; i < n; i++) {
        if(arr[temp] == 0 && arr[i] != 0) {
            swap(arr[temp], arr[i]);
            temp = i;
        } else if(arr[temp] != 0 && arr[i] !=0 ) {
            temp++;
        }
    }
}

// GFG CODE
void moveZeroesGFG(int arr[], int n) {
    int count = 0;
    for(int i = 0; i< n;i++) {
        if(arr[i] != 0) {
            swap(arr[i], arr[count]);
            count++;
        }
    }
}

int main() {
    
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    moveZeroes(arr, n);
    // moveZeroesGFG(arr, n);
    printArray(arr, n);
    cout << endl;
    
    return 0;
}
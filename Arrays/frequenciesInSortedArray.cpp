#include<bits/stdc++.h>
using namespace std;

void freq(int arr[], int n) {
    int count = 0, prev = arr[0];
    for(int i = 0; i < n; i++) {
        if(prev != arr[i]) {
            cout << prev << " " << count << endl;
            prev = arr[i];
            count = 1;
        } else {
            count ++;
        }
    }
    
    cout << prev << " " << count << endl;
}

int main() {
    
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    freq(arr, n);
    
    return 0;
}
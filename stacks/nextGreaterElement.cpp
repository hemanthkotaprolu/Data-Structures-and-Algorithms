#include<bits/stdc++.h>
using namespace std;

void nextGreat(int arr[], int n) {
    stack<int> s;
    s.push(arr[n-1]);
    cout << -1 << " ";
    for(int i = n-2; i >= 0; i--) {
        while(!s.empty() && s.top() < arr[i]) {
            s.pop();
        }
        
        if(s.empty()) {
            cout << -1 << " ";
        } else {
            cout << s.top() << " ";
        }
        
        s.push(arr[i]);
    }
}

/*
8   
15 10 18 12 4 6 2 8
10 18 12 4 6 2 8 -1
*/

int main() {
    
    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    nextGreat(arr, n);
    
    return 0;
}
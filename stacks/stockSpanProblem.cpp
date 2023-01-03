#include<bits/stdc++.h>
using namespace std;

void stockSpan(int arr[], int n) {
    stack<int> s;
    
    s.push(0);
    cout << 1 << " ";
    for(int i = 1; i < n; i++) {
        while(!s.empty() && arr[s.top()] < arr[i]) {
            s.pop();
        }
        
        if(s.empty()) {
            cout << i + 1 << " ";
        } else {
            cout << i- s.top() << " ";
        }
        s.push(i);
    }
    cout << endl;
}

int main() {
    
    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    stockSpan(arr, n);
    
    return 0;
}
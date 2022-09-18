#include<bits/stdc++.h>
using namespace std;

int intersectionArray(int a[], int n, int b[], int m) {
    unordered_set<int> s(a,a+n);
    
    int res = 0;
    for(int i = 0; i < m; i++) {
        if(s.find(b[i]) != s.end()) {
            res ++;
            s.erase(b[i]);
        }
    }
    
    return res;
}


int main() {
    
    int n;
    cin >> n;
    
    int a[n];
    
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    int m;
    cin >> m;
    
    int b[n];
    
    for(int i = 0; i < m; i++)
        cin >> b[i];
    
    
    
    cout << intersectionArray(a,n,b,m) << endl;
    return 0;
}
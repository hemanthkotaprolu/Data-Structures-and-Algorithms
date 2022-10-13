#include<bits/stdc++.h>
using namespace std;

const int CHAR = 256;

int longestDistinct(string str) {
    int n = str.length(), res = -1;
    
    vector<int> prev(CHAR, -1);
    
    int i = 0;  // to store the current window starting position
    
    for(int j = 0; j < n; j++) {
        i = max(i, prev[str[j]] + 1);
        int maxEnd = j - i + 1;
        
        res = max(res, maxEnd);
        prev[str[j]] = j;
    }
    return res;
}

int main() {
    
    string str; 
    cin >> str;
    
    cout << longestDistinct(str) << endl;
    
    return 0;
}
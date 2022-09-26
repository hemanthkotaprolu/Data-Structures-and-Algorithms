#include<bits/stdc++.h>
using namespace std;

int leftmostRepeating(string str) {
    int ans = -1;
    
    map<char, int> m;
    
    for(char c : str) {
        m[c]++;
    }
    
    for(int i = 0; i < str.length(); i++) {
        if(m[str[i]] > 1) {
            ans = i;
            break;
        }
    }
    return ans;
}

int main() {
    
    string str;
    cin >> str;
    
    cout << leftmostRepeating(str) << endl;
    
    return 0;
}
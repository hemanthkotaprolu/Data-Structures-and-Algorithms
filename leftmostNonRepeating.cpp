#include<bits/stdc++.h>
using namespace std;

const int CHAR = 256;

int leftmostNonRepeating(string str) {
    int visited[CHAR];
    
    fill(visited, visited+CHAR, -1);
    
    for(int i = 0; i < str.length(); i++) {
        if(visited[str[i]] == -1)
            visited[str[i]] = i;
        else
            visited[str[i]] = -2;
    }
    
    int res = INT_MAX;
    
    for(int i = 0; i < CHAR; i++) {
        if(visited[i] >= 0)
            res = min(res, visited[i]);
    }
    
    return (res==INT_MAX) ? -1 : res;
}

int main() {
    
    string str;
    cin >> str;
    
    cout << leftmostNonRepeating(str) << endl;
    
    return 0;
}
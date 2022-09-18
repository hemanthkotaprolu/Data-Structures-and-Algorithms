#include<bits/stdc++.h>
using namespace std;

int main() {
    
    unordered_set<int> s;
    
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    s.insert(60);
    
    for(int x : s) {
        cout << x << " ";
    }
    
    cout << endl;
    
    for(auto i = s.begin();i != s.end();i++) {
        cout << *i << " ";
    }
    
    cout << endl;
    
    cout << s.size() << endl;
    // s.clear();
    // cout << s.size() << endl;
    
    // s.erase();
    
    if(s.find(10) == s.end()) {
        cout << "Not found!" << endl;
    } else {
        cout << "Found" << endl;
    }
    
    cout << s.count(10) << endl;
    
    return 0;
}
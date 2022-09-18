#include<bits/stdc++.h>
using namespace std;

/*
    unordered_map ===> stores keys in unordered form
    ordered_map ===> stores keys in ordered form
*/


int main() {
    
    unordered_map<string, int> m;
    
    m["gfg"] = 20;
    m["ide"] = 30;
    
    m.insert({"courses", 153});
    
    for(auto it : m) {
        cout << it.first << ": " << it.second << endl;
    }
    
    if(m.find("idel") != m.end()) {
        cout << "Found" << endl;
    } else {
        cout << "Not found" << endl;
    }
    
    m.erase(m.begin(),m.end());
    cout << m.size() << endl;
    
    return 0;
}
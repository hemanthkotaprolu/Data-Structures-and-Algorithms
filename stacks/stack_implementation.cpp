#include<bits/stdc++.h>
using namespace std;

// All functions in stack STL is O(1)

int main() {
    
    stack<int> s;
    
    s.push(10);
    s.push(20);
    s.push(30);
    
    cout << s.size() << endl;
    cout << s.top() << endl;
    
    s.pop();
    
    cout << s.size() << endl;
    
    return 0;
}
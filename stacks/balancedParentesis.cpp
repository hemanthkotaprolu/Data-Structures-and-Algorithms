#include<bits/stdc++.h>
using namespace std;

// contains 6 possible characters in string: {, }, [, ], (, )
// check it they are balanced or not 

bool matchingParenthesis(char c1, char c2) {
    return (c1 == '{' && c2 == '}') || (c1 == '[' && c2 == ']') || (c1 == '(' && c2 == ')');
}

bool checkParenthesis(string str) {
    stack<char> s;
    
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == '{' || str[i] == '[' || str[i] == '(') {
            s.push(str[i]);
        } else if(str[i] == '}' || str[i] == ']' || str[i] == ')') {
            if(s.empty()) {
                return false;
            }
            
            if(matchingParenthesis(s.top(), str[i])) {
                s.pop();
            } else {
                return false;
            }
        }
    }
    
    if(s.empty()) {
        return true;
    }
    
    return false;
}

int main() {
    
    string str; cin >> str;
    
    cout << boolalpha;
    cout << checkParenthesis(str) << endl;
    
    return 0;
}
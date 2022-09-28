#include<bits/stdc++.h>
using namespace std;

void reverse(string &str, int start, int end) {
    // int start = 0, end = str.length()-1;
    
    while(start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

string betterReverseString(string &str) {
    int start = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ') {
            reverse(str, start, i-1);
            start = i + 1;
        }
    }
    reverse(str, start, str.length()-1);
    reverse(str, 0, str.length()-1);
    return str;
}

void naiveReverseString(string str) {
    stack<string> st;
    
    int prev = 0,val = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ') {
            st.push(str.substr(prev, val));
            prev = i + 1;
            val = 0;
        } else {
            val ++;
        }
    }
    
    st.push(str.substr(prev, val));
    
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    
    string str;
    getline(cin, str);
    
    // naiveReverseString(str);
    cout << betterReverseString(str) << endl;
    
    return 0;
}
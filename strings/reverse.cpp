#include<bits/stdc++.h>
using namespace std;

string reverse(string &str) {
    int start = 0, end = str.length()-1;
    
    while(start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
    
    return str;
}

int main() {
    
    string str;
    cin >> str;
    
    reverse(str);
    cout << str << endl;
    
    return 0;
}
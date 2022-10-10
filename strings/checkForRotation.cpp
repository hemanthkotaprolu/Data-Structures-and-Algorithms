#include<bits/stdc++.h>
using namespace std;

bool check(string str1, string str2) {
    string s1 = str1 + str1;
    
    if(str1.length() != str2.length()) {
        return false;
    }
    
    return s1.find(str2) != string::npos;
}

int main() {
    
    string str1, str2;
    cin >> str1 >> str2;
    
    cout << boolalpha << check(str1,str2) << endl;
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string str1, string str2) {
    if(str1.length() != str2.length())
        return false;
        
    map<char, int> m1, m2;
    
    for(char c : str1)
        m1[c]++;
    
    for(char c : str2)
        m2[c]++;
        
    for(char c : str1) {
        if(m1[c] != m2[c])
            return false;
    }
    return true;
}

int main() {
    
    string str1, str2;cin >> str1 >> str2;
    
    cout << boolalpha;
    cout << isAnagram(str1, str2) << endl;
    
    return 0;
}
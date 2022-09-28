#include<bits/stdc++.h>
using namespace std;

void patternSearch(string str1, string str2) {
    bool found = false;
    for(int i = 0; i <= str1.length() - str2.length(); i++) {
        if(str1.substr(i,str2.length()) == str2) {
            cout << i << " ";
            found = true;
        }
    }
    
    if(!found) 
        cout << "Not Found!";
    
    cout << endl;
}

int main() {
    
    string str1,str2;
    cin >> str1 >> str2;
    
    patternSearch(str1, str2);
    
    return 0;
}
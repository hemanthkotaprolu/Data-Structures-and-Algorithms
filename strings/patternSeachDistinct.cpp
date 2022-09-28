#include<bits/stdc++.h>
using namespace std;

// All the charecters in the strings are distinct
void patternSearch(string str1, string str2) {
    bool found = false;
    for(int i = 0; i <= str1.length()-str2.length();) {
        int j;
        for(j = 0; j < str2.length(); j++) {
            if(str1[i+j] != str2[j]) {
                break;
            }
        }
        if(j == str2.length()) {
            cout << i << " ";
            found = true;
        } 
        if(j == 0) {
            i++;
        } else {
            i+=j;
        }
    }
    if(!found)
        cout << "Not Found";
    
    cout << endl;
}

int main() {
    
    string str1, str2;
    cin >> str1 >> str2;
    
    patternSearch(str1, str2);
    
    return 0;
}
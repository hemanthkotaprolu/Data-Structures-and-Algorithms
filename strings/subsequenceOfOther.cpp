#include<bits/stdc++.h>
using namespace std;

bool check(string str1, string str2, int i, int j) {
    if(j == str2.size()) {
        return true;
    }
    if(i == str1.size() && j < str2.size()) {
        return false;
    }
    
    if(str1[i] == str2[j]) {
        i++;
        j++;
    } else {
        i++;
    }
    return check(str1, str2, i, j);
}

bool recursiveBetterCheck(string str1, string str2) {
    if(str1.size() < str2.size()) {
        swap(str1, str2);
    }
    
    return check(str1,str2,0,0);
}

bool iterativeBetterCheck(string str1, string str2) {
    int i=0,j=0;
    
    if(str1.size() < str2.size()) {
        swap(str1, str2);
    }
    
    while(i < str1.size() && j < str2.size()) {
        if(str1[i] == str2[j]) {
            i++;
            j++;
        } else {
            i++;
        }
    }
    
    return j == str2.size();
}

int main() {
    
    string s1, s2;
    
    cin >> s1 >> s2;
    
    cout << boolalpha;
    cout << recursiveBetterCheck(s1,s2) << endl;
    
    return 0;
}
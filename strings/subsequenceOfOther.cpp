#include<bits/stdc++.h>
using namespace std;

bool checkTwo(string str1, string str2, int n, int m) {
    if(m == 0)
        return true;
    
    if(n == 0 && m > 0)
        return false;
    
    if(str1[n] == str2[m]) {
        n--;
        m--;
    } else {
        n--;
    }
    
    return checkTwo(str1, str2, n, m);
}

/*
    It is better to always check from back if we are using two pointer approach.
    Because there wont be need to send the sizes of arrays, vectors, strings
*/

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
    return checkTwo(str1, str2, str1.size(), str2.size());
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
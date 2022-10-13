#include<bits/stdc++.h>
using namespace std;

const int CHAR = 256;

bool areSame(int arr1[], int arr2[]) {
    for(int i = 0; i < 256; i++) {
        if(arr1[i] != arr2[i])
            return false;
    }
    
    return true;
}

bool anagramSearch(string txt, string pat) {
    int countTxt[CHAR], countPat[CHAR];
    
    fill(countTxt, countTxt+CHAR, 0);
    fill(countPat, countPat+CHAR, 0);
    
    for(int i = 0; i < pat.length(); i++) {
        countTxt[txt[i]]++;
        countPat[pat[i]]++;
    }
    
    for(int i = pat.length(); i <= txt.length(); i++) {
        if(areSame(countTxt,countPat)) {
            return true;
        }
        
        countTxt[txt[i]]++;
        countTxt[txt[i-pat.length()]]--;
    }
    return false;
}

int main() {
    
    string txt, pat;
    
    cin >> txt >> pat;
    
    cout << boolalpha << anagramSearch(txt, pat) << endl;
    
    return 0;
}
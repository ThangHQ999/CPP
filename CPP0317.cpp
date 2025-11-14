#include <bits/stdc++.h>
using namespace std;

bool isThuanNghich(string n) {
    for (int i=0; i<n.length()/2; i++) {
        if (n[i] != n[n.length()-1-i]) return false;
    }
    return true;
}

bool isEven(string n) {
    for (char c:n) {
        if ((int)(c-'0') %2!=0) return false; 
    }
    return true;
}

int main() {
    int T;
    cin>> T;
    cin.ignore();
    while (T--)
    {
        string n;
        cin>> n;
        if (isEven(n) && isThuanNghich(n)) {
            cout<< "YES\n"; 
        } else {
            cout<< "NO\n";
        }
    }
    
    return 0;
}
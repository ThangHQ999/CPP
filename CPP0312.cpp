#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    cin.ignore();
    while (T--)
    {
        int count[26] = {0};
        string S;
        int K;
        cin>> S >> K;
        for (int i=0; i<S.length(); i++) {
            int digit = (int)(S[i]-'a');
            count[digit]++;
        }
        int charLess = 0;
        for (int i=0; i<26; i++) {
            if (count[i] == 0) charLess++;
        }
        if (charLess > K) {
            cout<< 0 << "\n";
        } else {
            cout<< 1 << "\n";
        }
    }
    
    return 0;
}
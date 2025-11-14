#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    cin.ignore();
    while (T--)
    {
        string S;
        cin>> S;
        map <char, int> freq;
        for (int i=0; i<S.length(); i++) {
            freq[S[i]]++;
        }
        for (char c: S) {
            if (freq[c] == 1) {
                cout<< c;
            }
        }
        cout<<"\n";
    }
    
    return 0;
}
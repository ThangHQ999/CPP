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
        for (char c:S) {
            freq[c]++;
        }
        int res = 0;
        for (const auto f:freq) {
            int num = f.second;
            res += num*(num-1)/2;
        }
        res += S.length();
        cout<< res << "\n";
    }
    
    return 0;
}
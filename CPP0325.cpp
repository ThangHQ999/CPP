#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    cin.ignore();
    while (T--)
    {
        string N;
        cin>> N;
        int total = 0;
        for (int i=0; i<N.length(); i++) {
            int digit = N[i] - '0';
            int num = i%2==0?-digit:digit;
            total += num;
        }
        if (total%11==0) {
            cout<< 1 << "\n";
        } else {
            cout<< 0 << "\n";
        }
    }
    
    return 0;
}
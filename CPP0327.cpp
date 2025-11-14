#include <bits/stdc++.h>
using namespace std;

bool divisibleBy5(const string &bin) {
    int rem = 0;
    for (char c: bin) {
        int bit = c-'0';
        rem = (rem*2+bit)%5;
    }
    return rem == 0;
}

int main() {
    int T;
    cin>> T;
    cin.ignore();
    while (T--)
    {
        string N;
        cin>> N;
        if (divisibleBy5(N)) {
            cout<< "Yes\n";
        } else {
            cout<< "No\n";
        }
    }
    return 0;
}
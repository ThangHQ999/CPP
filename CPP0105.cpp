#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int n;
        cin>> n;
        bool isFortune = true;
        while (n>0)
        {
            if (n%10 == 0 || n%10 == 6 || n%10 == 8) {
                isFortune = true;
            } else {
                isFortune = false;
                break;
            }
            n/=10;
        }
        if (isFortune) {
            cout<< "YES\n";
        } else {
            cout<< "NO\n";
        }
    }
    return 0;
}
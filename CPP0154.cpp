#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        long long N, K;
        cin>> N >> K;
        long long res = 0;
        if (K != 0) {
            long long q = N / K;
            long long r = N % K;
            res = q * (K * (K - 1) / 2) + r * (r + 1) / 2;
        } else {
            res = 0;
        }
        if (res == K) {
            cout<< 1;
        } else {
            cout<< 0;
        }
        cout<< "\n";
    }
    return 0;
}
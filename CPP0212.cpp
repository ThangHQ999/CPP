#include <bits/stdc++.h>
using namespace std;
long long mod = 1000000007;
int main() {
    int T;
    cin>> T;
    while (T--)
    {
        long long n, x;
        long long res = 0;
        cin>> n >> x;
        vector<int> P(n);
        for (int i=n-1; i>=0; i--) {
            cin>> P[i];
        }
        long long x_pow = 1;
        for (int i=0; i<n; i++) {
            long long term = (P[i] * x_pow) % mod;
            res = (res + term) % mod;
            x_pow = (x_pow * x) % mod;
        }
        cout<< res << endl;
    }
    
    return 0;
}
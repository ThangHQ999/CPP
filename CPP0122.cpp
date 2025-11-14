#include <bits/stdc++.h>
using namespace std;

#define MAX 999999

long long gcd(long long a, long long b) {
    if (b==0) return a;
    return gcd(b, a%b);
}

long long lcm(long long a, long long b) {
    return a*b/gcd(a, b);
}

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int n;
        cin>> n;
        long long res = 1;
        for (int i=1; i<=n; i++) {
            res = lcm(i, res);
        }
        cout<< res << "\n";
    }
    
    return 0;
}
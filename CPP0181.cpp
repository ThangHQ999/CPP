#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if (b==0) return a;
    return gcd(b, a%b);
}

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        long long a, x, y;
        cin>> a >> x >> y;
        long long loop = gcd(x, y);
        for (long long i=0; i<loop; i++) {
            cout<< a;
        }
        cout<< endl;
    }
    
    return 0;
}
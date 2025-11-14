#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if (n<2) return false;
    if (n==2 || n==3) return true;
    if (n%2 == 0) return false;
    for (int i=3; i<=sqrt(n); i+=2) {
        if (n%i == 0) return false;
    }
    return true;
}

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        long long N;
        cin>> N;
        
        long long limit = sqrt(N);
        long long cnt = 0;

        for (long long p = 2; p <= limit; p++) {
            if (isPrime(p)) cnt++;
        }

        cout<< cnt << endl;
    }
    
    return 0;
}
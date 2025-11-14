#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n<2) return false;
    if (n==2 || n==3) return true;
    if (n%2==0) return false;
    for (int i=3; i<=sqrt(n); i+=2) {
        if (n%i ==0) return false;
    }
    return true;
}

int main() {
    int T;
    cin>> T;
    vector <pair<int, int>> primes;
    while (T--)
    {
        int M, N;
        cin>> M >> N;
        for (int i=M; i<=N; i++) {
            if (isPrime(i)) {
                primes.emplace_back(i, 1);
            } else {
                primes.emplace_back(i, 0);
            }
        }
        for (auto &p: primes) {
            int a = p.first;
            int b = p.second;
            for (int i=M; i<=N; i++) {
                if (a == i) {
                    
                }
            }
        }
    }
    
    return 0;
}

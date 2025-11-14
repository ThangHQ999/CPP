#include <bits/stdc++.h>
using namespace std;

int findMinPrime(int n) {
    if (n<2) return n;
    if (n == 2 || n ==3) return n;
    if (n%2 == 0) return 2;
    for (int i=3; i<=sqrt(n); i+=2) {
        if (n%i == 0) return i;
    }
    return n;
}

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int N;
        cin>> N;
        for (int i=1; i<=N; i++) {
            cout<< findMinPrime(i) << " ";
        }
        cout<< endl;
    }
    
    return 0;
}
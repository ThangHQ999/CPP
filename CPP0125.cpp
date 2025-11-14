#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n<2) return false;
    if (n==2 || n==3) return true;
    if (n%2==0) return false;
    int limit = sqrt(n);
    for (int i=3; i<=limit; i+=2) {
        if (n%i==0) return false;
    }
    return true;
}

int main() {
    int a, b;
    cin>> a >> b;
    vector <int> primes;
    if (a>b) {
        int temp =a;
        a = b;
        b = temp;
    }
    for (int i=a; i<=b; i++) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }
    if (primes.empty()) {
        cout<< -1;
    } else {
        for (int i=0; i<primes.size(); i++) {
            if (i) cout<< " ";
            cout<< primes[i];
        }
    }
    return 0;
}
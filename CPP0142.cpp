#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    if (n % 2 == 0) return n == 2;
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0) return false;
    return true;
}

int phi(int x) {
    int res = x;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            while (x % i == 0) x /= i;
            res -= res / i;
        }
    }
    if (x > 1) res -= res / x;
    return res;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int x;
        cin >> x;

        int t = phi(x);  
        if (isPrime(t)) cout << 1 << "\n";
        else cout << 0 << "\n";
    }
    return 0;
}

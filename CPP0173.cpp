#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

long long pow10(int n) {
    long long p = 1;
    while (n--) p *= 10;
    return p;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long X, Y, Z, N;
        cin >> X >> Y >> Z >> N;

        long long L = lcm(lcm(X, Y), Z);

        long long low = pow10(N - 1);
        long long k = (low + L - 1) / L;
        long long result = k * L;

        if (result < pow10(N)) cout << result << "\n";
        else cout << -1 << "\n";
    }

    return 0;
}

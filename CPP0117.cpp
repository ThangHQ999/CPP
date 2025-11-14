#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long n;
        cin >> n;
        if (n == 0) {
            cout << 0 << "\n";
        } else {
            cout << 1 + (n - 1) % 9 << "\n";
        }
    }
}

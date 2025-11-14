#include <iostream>
#include <cmath>
using namespace std;

void solve() {
    long long N;
    int k;
    cin>> N >> k;
    long long res = -1;

    while (N % 2 == 0) {
        k--;
        if (k == 0) {
            res = 2;
            break;
        }
        N /= 2;
    }

    if (k == 0) {
        cout << res << "\n";
        return;
    }

    for (long long i = 3; i * i <= N; i += 2) {
        while (N % i == 0) {
            k--;
            if (k == 0) {
                res = i;
                break;
            }
            N /= i;
        }
        if (k == 0) {
            break;
        }
    }

    if (N > 1 && k == 1) {
        res = N;
    }

    cout << res << "\n";
}

int main() {
    int T;
    cin>> T;
    while (T--) {
        solve();
    }
    return 0;
}
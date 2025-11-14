#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long n;
        cin >> n;
        vector<long long> A(n-1);
        long long sumArray = 0;

        for (int i = 0; i < n-1; i++) {
            cin >> A[i];
            sumArray += A[i];
        }

        long long totalSum = n * (n + 1) / 2;
        cout << totalSum - sumArray << "\n";
    }
    return 0;
}

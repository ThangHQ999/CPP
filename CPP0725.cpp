#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, r;
        cin >> n >> r;

        vector<vector<long long>> pascal(n + 1, vector<long long>(n + 1, 0));

        for (int i = 0; i <= n; i++) {
            pascal[i][0] = pascal[i][i] = 1;
            for (int j = 1; j < i; j++) {
                pascal[i][j] = (pascal[i - 1][j - 1] + pascal[i - 1][j])  % MOD;
            }
        }

        cout << pascal[n][r] << "\n";
    }

    return 0;
}

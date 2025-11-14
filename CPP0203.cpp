#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        unordered_set<int> S;
        for (int i = 0; i < N; ++i) {
            int x;
            cin >> x;
            if (x > 0) {
                S.insert(x);
            }
        }
        
        int ans = 1;
        while (S.count(ans)) {
            ++ans;
        }
        cout << ans << "\n";
    }
    return 0;
}
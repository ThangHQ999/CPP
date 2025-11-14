#include <iostream>
#include <vector>
#include <algorithm> 
#include <iterator>

using namespace std;

void solve() {
    int N, X;

    if (!(cin >> N >> X)) return;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    long long cnt = 0; 

    for (int j = 0; j < N; j++) {
        int target = A[j] + X;

        auto low = lower_bound(A.begin(), A.end(), target);
        auto high = upper_bound(A.begin(), A.end(), target);

        if (low != A.end() && *low == target) {
            cnt += distance(low, high); 
        }
    }

    cout << (cnt == 0 ? -1 : 1) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    if (!(cin >> T)) return 0;
    
    while (T--) {
        solve();
    }
    
    return 0;
}
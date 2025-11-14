#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin>> N;
    vector<int> A(N);
    for (int i=0; i<N; i++) cin>> A[i];
    sort(A.begin(), A.end());
    long long res = 0;
    for (int i=0; i<N; i++) res += 1LL*A[i]*(2LL*i-N+1);
    cout<< res << "\n";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int n, m;
        cin>> n >> m;
        vector <int> A(n);   
        vector <int> B(m);
        for (int i=0; i<n; i++) {
            cin>> A[i];
        }   
        for (int i=0; i<m; i++) {
            cin>> B[i];
        }   
        long long maxA = *max_element(A.begin(), A.end());
        long long minB = *min_element(B.begin(), B.end());
        cout<< maxA * minB << "\n";
    }
    return 0;
}
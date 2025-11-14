#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int n, X;
        cin>> n >> X;
        vector <int> A(n);
        for (int i=0; i<n; i++) {
            cin>> A[i];
        }
        auto it = find(A.begin(), A.end(), X);
        if (it!=A.end()) {
            cout<< (it-A.begin())+1 << "\n";
        } else {
            cout<< "-1\n";
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int n, k;
        cin>> n >> k;
        vector<int> A(n*n, 0);
        for (int i=0; i<n*n; i++) {
            cin>> A[i];
        }
        sort(A.begin(), A.end());
        cout<< A[k-1] <<"\n";
    }
    
    return 0;
}
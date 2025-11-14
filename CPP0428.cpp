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
        vector <int> C;
        for (int i=0; i<n; i++) {
            cin>> A[i];
            C.push_back(A[i]);
        }
        for (int i=0; i<m; i++) {
            cin>> B[i];
            C.push_back(B[i]);
        }
        sort(C.begin(), C.end());
        for (int x:C) {
            cout<< x << " ";
        }
        cout<< "\n";
    }
    return 0;
}
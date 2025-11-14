#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int n;
        cin>> n;
        vector <int> A(n);
        for (int i=0; i<n; i++) {
            cin>> A[i];
        }
        sort(A.begin(), A.end());
        for (int i=0; i<n/2; i++) {
            cout<< A[n-1-i] << " ";
            cout<< A[i] << " ";
        }
        if (n%2==1) cout<< A[n/2];
        cout<< "\n";
    }
    return 0;
}
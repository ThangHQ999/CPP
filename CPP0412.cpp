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
        for (int &x: A) {
            cout<< x << " ";
        }
        cout<< "\n";
    }
    
    return 0;
}
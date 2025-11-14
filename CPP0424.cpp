#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int n, k;
        cin>> k >> n;
        vector <vector <int>> A(k, vector <int> (n));
        for (int i=0; i<k; i++) {
            for (int j=0; j<n; j++) {
                cin>> A[i][j];
            }
        }
        vector <int> B;
        for (const auto &row :A) {
            B.insert(B.begin(), row.begin(), row.end());
        }
        sort(B.begin(), B.end());
        for (int i=0; i<n*k; i++) {
            cout<< B[i] << " ";
        }
        cout<< "\n";
    }
    return 0;
}
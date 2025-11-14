#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int n, Q;
        cin>> n >> Q;
        vector <int> A;
        for (int i=0; i<n; i++) {
            int num;
            cin>> num;
            A.push_back(num);
        }
        for (int i=0; i<Q; i++) {
            int L, R;
            cin>> L >> R;
            int total = 0;
            for (int i=L-1; i<R; i++) {
                total += A[i];
            }
            cout<< total <<"\n";
        }
    }
    return 0;
}
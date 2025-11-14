#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int N, x, res;
        cin>> N >> x;
        vector <int> A(N);
        for (int i=0; i<N; i++) {
            cin>> A[i];
        }
        for (int i=0; i<N; i++) {
            if (A[i] == x) {
                res = i+1;
                break;
            }
        }
        cout<< res << "\n";
    }
    
    return 0;
}
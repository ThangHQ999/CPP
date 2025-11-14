#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int N;
        cin>> N;
        vector<vector<int>> A(N, vector<int>(N));
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                cin>> A[i][j];
            }
        }
        
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int N, M;
        cin>> N >> M;
        vector<vector<int>> A(N, vector<int>(M, 0));
        for (int i=0; i<N; i++) {
            for (int j=0; j<M; j++) {
                cin>> A[i][j];
            }
        }

        
    }
    
    return 0;
}
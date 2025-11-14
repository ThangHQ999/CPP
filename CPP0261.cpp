#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M;
    cin>> N;
    vector<vector<int>> A(N, vector<int>(N, 0));
    vector<vector<int>> C(N, vector<int>(N, 0));
    
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cin>> A[i][j];
        }
    }
    cin>> M;
    vector<vector<int>> B(M, vector<int>(M, 0));
    for (int i=0; i<M; i++) {
        for (int j=0; j<M; j++) {
            cin>> B[i][j];
        }
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            C[i][j] = A[i][j]*B[i%(M)][j%(M)];
        }
    }
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cout<< C[i][j] << " ";
        }
        cout<< endl;
    }
    return 0;
}
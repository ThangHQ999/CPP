#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int N, M;
        cin>> N >> M;
        int A[N][M];
        vector <int> col;
        vector <int> row;
        for (int i=0; i<N; i++) {
            for (int j=0; j<M; j++) {
                cin>> A[i][j];
            }
        }
        for (int i=0; i<N; i++) {
            for (int j=0; j<M; j++) {
                if (A[i][j] == 1) {
                    col.push_back(j);
                    row.push_back(i);
                }
            }
        }
        for (int i=0; i<col.size(); i++) {
            for (int j=0; j<N; j++) {
                A[j][col[i]] = 1; 
            }
        }
        for (int i=0; i<row.size(); i++) {
            for (int j=0; j<M; j++) {
                A[row[i]][j] = 1; 
            }
        }
        for (int i=0; i<N; i++) {
            for (int j=0; j<M; j++) {
                cout<< A[i][j] << " ";
            }
            cout<< "\n";
        }
    }
    return 0;
}
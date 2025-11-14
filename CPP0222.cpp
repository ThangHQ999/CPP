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
        int cnt =0;
        map<int, int> preq;
        for (int i=0; i<N; i++) {
            map<int, int> row;
            for (int j=0; j<N; j++) {
                row[A[i][j]]++;
            }
            for (auto p: row) {
                if (p.second > 0) {
                    preq[p.first]++;
                }
            }
        }
        for (auto p: preq) {
                if (p.second == N) {
                    cnt++;
                }
            }
        cout<< cnt << endl;
    }
    
    return 0;
}
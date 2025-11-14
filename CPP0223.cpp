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
        int top=0, bottom =N-1;
        int left=0, right = M-1;
        vector<int> res;
        while (top<=bottom && left <= right) 
        {
            for (int j=left; j<=right; j++) {
                res.push_back(A[top][j]);
            }
            top++;

            for (int j=top; j<=bottom; j++) {
                res.push_back(A[j][right]);
            }
            right--;

            if (top <= bottom) {
            for (int j=right; j>=left; j--) {
                res.push_back(A[bottom][j]);
            }
            bottom--;}

            if (left <= right) {
            for (int j=bottom; j>=top; j--) {
                res.push_back(A[j][left]);
            }
            left++;}
        }
        for (int i = 0; i < res.size(); i++) {
            cout << res[i];
            if (i != res.size() - 1) cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
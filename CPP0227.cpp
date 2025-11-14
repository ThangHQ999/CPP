#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int N;
        cin>> N;
        int A[N][N];
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                cin>> A[i][j];
            }
        }
        int initCol = 0;
        for (int i=0; i<N; i++) {
            if (initCol == 0) {
                for (int j=initCol; j<N; j++) {
                    cout<< A[i][j] << " ";
                    if (j==N-1) {
                        initCol = j;
                    }
                }
            } else {
                for (int j=initCol; j>=0; j--) {
                    cout<< A[i][j] << " ";
                    if (j==0) {
                        initCol = 0;
                    }
                }
            }
        }
        cout<< "\n";
    }
    return 0;
}
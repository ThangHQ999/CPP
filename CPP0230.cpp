#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>> N;
    int A[N][3];
    for (int i=0; i<N; i++) {
        for (int j=0; j<3; j++) {
            cin>> A[i][j];
        }
    }
    int res = 0;
    for (int i=0; i<N; i++) {
        int total0 = 0;
        int total1 = 0;
        for (int j=0; j<3; j++) {
            int num =A[i][j];
            if (num == 0) total0++;
            else if (num == 1) total1++;
        }
        if (total1>total0) res++;
    }
    cout<< res << "\n";
    return 0;
}
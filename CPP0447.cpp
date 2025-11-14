#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int N, K;
        cin>> N >> K;
        vector <int> A(N);
        for (int i=0; i<N; i++) {
            cin>> A[i];
        }
        sort(A.begin(), A.end());
        for (int i=A.size()-1; i>A.size()-1-K; i--) {
            cout<< A[i] << " ";
        }
        cout<< "\n";
    }
    
    return 0;
}
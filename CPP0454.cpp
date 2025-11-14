#include <bits/dtc++.h>
using namespace std;
int main() {
    int T
    cin>> T;
    while (T--)
    {
        int N;
        cin>> N;
        vector<int> A(N);
        map<int, int> preq;
        for (int i=0; i<N; i++) {
            cin>> A[i];
            preq[A[i]]++;
        }
        sort(A.begin(), A.end());

        for (int i=0; i<N-1; i++) {
            for (int j=i+1; j<N; j++) {
                long long temp = A[i]*A[i] + A[j]*A[j];
                if ()
            }
        }
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int N;
        cin>> N;
        vector <int> A(N);
        for (int i=0; i<N; i++) {
            cin>> A[i];
        }
        map <int, int> B;
        for (int i=0; i<N; i++) {
            B[A[i]] ++;
        }
        int res = 0;
        for (auto &p: B) {
            if (p.second > 1) {
                res += p.second;
            }
        }
        cout<< res << "\n";
    }
    
    return 0;
}
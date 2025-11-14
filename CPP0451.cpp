#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin>> T;
    while (T--)
    {   
        int N, k, x;
        cin>> N;
        vector<int> A(N);
        for (int i=0; i<N; i++) {
            cin>> A[i];
        }
        cin>> k >> x;
        
        int i = lower_bound(A.begin(), A.end(), x) - A.begin(), j = i;
        for (int z = k / 2; z >= 1; --z) {
            cout << A[i - z] << " ";
        }

        if (A[j] == x) j++;
        for (int z = 0; z < k / 2; ++z) {
            cout << A[j + z] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int n;
        cin>> n;
        vector <int> A(n);   
        for (int i=0; i<n; i++) {
            cin>> A[i];
        }
        map <int, int> preq;
        for (int i=0; i<n; i++) {
            preq[A[i]]++;
        }
        int L = *min_element(A.begin(), A.end());
        int R = *max_element(A.begin(), A.end());
        int need = 0;
        for (int i=L; i<=R; i++) {
            if (!(preq[i] > 0)) {
                need++;
            }
        }
        cout<< need <<"\n";
    }
    return 0;
}
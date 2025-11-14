#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin>> T;
    while (T--)
    {  
        int n, L, R;
        cin>> n;
        vector<int> A(n);
        for (int i=0; i<n; i++) {
            cin>> A[i];
        }
        cin>> L >> R;
        
        int pos = -1;

        for (int i=L; i<=R-1; i++) {
            if (A[i] > A[i+1]) {
                pos = i;
                break;
            }
        }
        
        if (pos == -1) {
            cout << "Yes" << endl;
        } else {
            int newPos = -1;
            for (int i=pos; i<=R-1; i++) {
                if (A[i] < A[i+1]) {
                    newPos = i;
                    break;
                }
            }
            
            if (newPos == -1) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    
    return 0;
}
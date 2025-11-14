#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int n;
        cin>> n;
        vector<int> A(n);
        for (int i=0; i<n; i++) {
            cin>> A[i];
        }
        // dãy giảm ngặt -1
        int minRes = -1;
        for (int i=0; i<n-1; i++) {
            for (int j=i+1; j<n; j++) {
                if (A[j] > A[i]) {
                    int temp = A[j] - A[i];
                    if (temp > minRes) minRes = temp;
                }
            }
        }
        cout<< minRes << endl;
    }
    
    return 0;
}
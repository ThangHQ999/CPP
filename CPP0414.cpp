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
        set <int> B;
        for (int i=0; i<n; i++) {
            while (A[i] > 0)
            {
                int num = A[i]%10;
                B.insert(num);
                A[i]/=10;
            }
        }
        vector <int> C(B.begin(), B.end());
        sort(C.begin(), C.end());
        for (int x:C) {
            cout<< x << " ";
        }
        cout<< "\n";
    }
    return 0;
}
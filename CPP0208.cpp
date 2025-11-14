#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int n, k;
        cin>> n >> k;
        vector <int> A;
        for (int i=0; i<n; i++) {
            int num;
            cin>> num;
            A.push_back(num);
        }
        sort(A.begin(), A.end());
        cout<< A[k-1] <<"\n";
    }
    return 0;
}
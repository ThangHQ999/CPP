#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int n, k;
        cin>> n >> k;
        vector <int> A(n);
        for (int i=0; i<n; i++) {
            cin>> A[i];
        }
        map <int, int> freq;
        for (int i=0; i<n; i++) {
            freq[A[i]]++;
        }
        long long count = 0;
        for (int i=0; i<n; i++) {
            count += freq[k-A[i]];
            if (k-A[i] == A[i]) count--;
        }
        cout<< count/2 <<"\n";
    }
    return 0;
}
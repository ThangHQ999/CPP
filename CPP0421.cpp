#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int n;
        cin>> n;
        vector <long long> A(n);
        for (int i=0; i<n; i++) {
            cin>> A[i];
        }
        map <long long, long long> freq;
        for (int i=0; i<n; i++) {
            freq[A[i]]++;
        }
        for (int i=0; i<n; i++) {
            if (freq[i]>0) {
                cout<< i << " ";
            } else {
                cout<< -1 << " ";
            }
        }
        cout<< "\n";
    }
    return 0;
}
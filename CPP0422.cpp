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
        vector <int> target = {0};
        stable_partition(A.begin(), A.end(), [](long long x){return x!= 0;});
        for (int i=0; i<n; i++) {
            cout<< A[i] << " ";
        }
        cout<< "\n";
    }
    return 0;
}
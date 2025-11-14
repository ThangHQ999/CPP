#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int N;
        cin>> N;
        vector <int> A;
        int n;
        for (int i=0; i<N; i++) {
            cin>> n;
            A.push_back(n);
        }
        sort(A.begin(), A.end());
        vector <int> B;
        for (int i=1; i<N; i++) {
            int num = A[i]-A[i-1];
            B.push_back(num);
        }
        int res = *min_element(B.begin(), B.end());
        cout<< res <<"\n";
    }
    return 0;
}
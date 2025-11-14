#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int n, m;
        cin>> n >> m;
        vector <int> A(n);
        vector <int> B(m);
        
        for (int i=0; i<n; i++) {
            cin>> A[i];
        }
        for (int i=0; i<m; i++) {
            cin>> B[i];
        }
        set<int> unionSet(A.begin(), A.end());
        unionSet.insert(B.begin(), B.end());

        for (int x:unionSet) {
            cout<< x << " ";
        }
        cout<< "\n";
        set<int> setA(A.begin(), A.end());
        set<int> intersec;
        for (int x : B) if (setA.count(x)) intersec.insert(x);
        for (int x : intersec) cout << x << ' ';
        cout << '\n';
    }
    return 0;
}
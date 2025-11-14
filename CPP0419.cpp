#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int n, m;
        cin>> n >> m;
        vector<int> A(n);
        vector<int> B(m);
        set<int> Union, Intersection, IntersectionRes;
        for (int i=0; i<n; i++) {
            cin>> A[i];
            Union.insert(A[i]);
            Intersection.insert(A[i]);
        }
        for (int i=0; i<m; i++) {
            cin>> B[i];
            Union.insert(B[i]);
        }
        for (int i=0; i<m; i++) {
            if (Intersection.count(B[i])) {
                IntersectionRes.insert(B[i]);
            }
        }

        for (auto i:Union) {
            cout<< i << " ";
        }
        cout<< endl;

        for (auto i:IntersectionRes) {
            cout<< i << " ";
        }
        cout<< endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool checkDoiXung(vector<int>& a) {
    int len = a.size();
    for (int i=0; i<=len/2; i++) {
        if (a[i] != a[n-i-1]) return false;
    }
    return true;
}

vector<int> merge(int depth, vector<int>& a, int posStart) {
    vector<int> b = a;
    b[posStart]
}

int Try(int depth, vector<int>& a) {
    while (!checkDoiXung(a))
    {
        depth++;

    }
    return depth;
};

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
        int depth = 0;
        // check đoi xung
        // - true: return depth
        // - false: depth++, duyệt qua các th
    }
    
    return 0;
}
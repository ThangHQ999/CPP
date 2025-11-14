#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int n) {
    int a = sqrt(n);
    return n == a*a;
}

bool isFibo(int n) {
    return isPerfectSquare(5*n*n-4) || isPerfectSquare(5*n*n+4);
}

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
        for (int i=0; i<n; i++) {
            if (isFibo(A[i])) cout<< A[i] << " ";
        }
        cout<< endl;
    }
    
    return 0;
}
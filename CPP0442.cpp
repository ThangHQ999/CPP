#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector <int> &A, int X, int left, int right) {
    if (left>right) return -1;
    int mid = (left+right)/2;
    if (A[mid] == X) return mid;
    if (A[mid]>X) return binarySearch(A, X, left, mid-1);
    if (A[mid]<X) return binarySearch(A, X, mid+1, right);
}

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int n, X;
        cin>> n >> X;
        vector <int> A(n);
        for (int i=0; i<n; i++) {
            cin>> A[i];
        }
        sort(A.begin(), A.end());
        int pos = binarySearch(A, X, 0, n-1);
        if (pos != -1) {
            cout<< 1; 
        } else {
            cout<< -1;
        }
        cout<<"\n";
    }
    
    return 0;
}
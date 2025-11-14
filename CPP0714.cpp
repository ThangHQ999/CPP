#include <bits/stdc++.h>

using namespace std;

void findPre(vector<int> &a) {
    int n = a.size();
    int i=n-2;
    while (i>=0 && a[i] < a[i+1]) i--;
    if (i<0) {
        reverse(a.begin(), a.end());
        return;
    }
    int j=n-1;
    while (a[j] > a[i]) j--;
    
    swap(a[i], a[j]);
    reverse(a.begin() + i + 1, a.end());
}

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int N;
        cin>> N;
        vector<int> X(N, 0);
        for (int i=0; i<N; i++) {
            cin>> X[i];
        }
        findPre(X);
        for (int i=0; i<N; i++) {
            cout<< X[i] << "  ";
        }
        cout<< endl;
    }
    return 0;
}
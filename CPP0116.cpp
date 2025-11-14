#include <bits/stdc++.h>
using namespace std;

int soNguyenToNhoNhat(int n) {
    if (n==1) return 1;
    if (n%2 == 0) return 2;
    for (int i=3; i<=sqrt(n); i+=2) {
        if (n%i == 0) {
            return i;
        }
    }
    if (n>1) return n;
}

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int N;
        cin>> N;
        for (int i=1; i<=N; i++) {
            cout<< soNguyenToNhoNhat(i) << " ";
        }
        cout<< endl;
    }
    
    return 0;
}
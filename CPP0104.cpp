#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>> N;
    long long total = 0;
    for (int i=1; i<=N; i++) {
        long long term = 1;
        for (int j=1; j<=i; j++) {
            term *= j;
        }
        total += term;
    }
    cout<< total;
    return 0;
}

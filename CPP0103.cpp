#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>> N;
    double total = 0;
    for (int i=1; i<=N; i++) {
        total += 1.0/i;
    }
    cout<< fixed << setprecision(4) << total;
    return 0;
}
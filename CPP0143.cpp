#include <bits/stdc++.h>
using namespace std;

long long fibo[93] = {0};

void precompute() {
    fibo[1] = 1;
    fibo[2] = 1;
    for (int i=3; i<=92; i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
}

int main() {
    int T;
    cin>> T;
    precompute();
    while (T--)
    {
        int n;
        cin>> n;
        cout<< fibo[n] << "\n";
    }
    return 0;
}
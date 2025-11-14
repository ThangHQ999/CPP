#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

int main() {
    int T;
    cin>> T;
    const int MAX_N = 1000;
    vector <long long> fibonacci(MAX_N+1);
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for (int i=2; i<=MAX_N; i++) {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
        fibonacci[i] %= mod;
    }
    while (T--)
    {
        int n;
        cin>> n;
        cout<< fibonacci[n]<< "\n";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        long long n;
        cin>> n;
        cout<< n + n*(n-1)/2 << "\n";
    }
    return 0;
}
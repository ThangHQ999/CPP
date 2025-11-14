#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin>> T;
    while (T--)
    {
        long long n, k;
        cin>> n >> k;
        long long currentSum = LLONG_MIN;
        long long bestSum = LLONG_MIN;
        long long x;

        for (long long i=0; i<n; i++) {
            cin>> x;
            if (currentSum < 0) currentSum = x;
            else currentSum += x;

            bestSum = max(bestSum, currentSum);
        }
        cout<< bestSum << endl;
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;


int main() {
    int T;
    cin>> T;
    while (T--)
    {
        long long N;
        cin>> N;
        long long res = 0;
        while (N%2==0)
        {
            res = 2;
            N/=2;
        }
        for (long long i=3; i<=sqrt(N); i++) {
            while (N%i==0)
            {
                res = i;
                N/=i;
            }
        }
        if (N>1) res = N;
        cout<< res <<"\n";
    }
    return 0;
}
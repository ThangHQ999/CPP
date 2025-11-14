#include <bits/stdc++.h>
using namespace std;

long long powerMod(long long x, long long y, long long p) {
    long long result = 1;
    x%=p;
    while (y>0)
    {
        if (y%2==1) {
            result = (result*x)%p;
        }
        y /=2;
        x = (x*x)%p;
    }
    return result;
}

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int x, y, p;
        cin>> x >> y >> p;
        cout<< powerMod(x, y, p) << "\n";
    }
    return 0;
}

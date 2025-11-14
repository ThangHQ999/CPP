#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n<2) return 0;
    if (n==2 || n==3) return true;
    if (n%2 == 0) return false;
    for (int i=3; i<=sqrt(n); i+=2) {
        if (n%i==0) return false;
    }
    return true;
}

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int L, R, cnt = 0;
        cin>> L >> R;
        for (int i=L; i<=R; i++) {
            if (isPrime(i)) cnt++;
        }
        cout<< cnt << endl;
    }
    
    return 0;
}
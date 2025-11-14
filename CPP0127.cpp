#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n<2) return false;
    if (n==2 || n==3) return true;
    if (n%2==0) return false;
    for (int i=3; i<=sqrt(n); i+=2) {
        if (n%i ==0) return false;
    }
    return true;
}

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int N;
        cin>> N;
        bool isHas = false;
        for (int i=2; i<=sqrt(N)+1; i++) {
            if (isPrime(i)&&isPrime(N-i)) {
                cout<< i << " " << N-i << "\n";
                isHas = true;
                break;
            }
        }
        if (!isHas) {
            cout<< -1 << "\n";
        }
    }
    
    return 0;
}
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

bool isSquare(int n) {
    int a = (int)sqrt(n);
    return a*a == n && isPrime(a); 
}

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int N;
        cin>> N;
        for (int i=4; i<=N; i++) {
            if (isSquare(i)) {
                cout<< i << " ";
            }
        }
        cout<< "\n";
    }
    return 0;
}
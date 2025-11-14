#include <bits/stdc++.h>
using namespace std;

vector<int> cnt(999999, 0);

void calculateNum(int n) {
    if (n<2) return;
    if (n==2 || n==3) cnt[n] = 1;
    while (n%2 == 0) {
        cnt[2]++;
        n/=2;
    }
    for (int i=3; i<=sqrt(n); i+=2) {
        while (n%i == 0) {
            cnt[i]++;
            n/=i;
        }
    }
    if (n>1) cnt[n] = 1;
    return;
}

bool result() {
    int valid = 3;
    for (int p:cnt) {
        if (p>1) return false;
        if (p == 1)  {
            valid--;
        }
        if (valid < 0) return false;
    }
    if (valid == 0) return true;
    return false;
}

void reset() {
    for (int &p:cnt) p=0;
}

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int N;
        cin>> N;
        calculateNum(N);
        cout<< result() << "\n";
        reset();
    }
    
    return 0;
}
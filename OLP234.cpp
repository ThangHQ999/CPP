#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>> N;
    cin.ignore();
    string S;
    cin>> S;
    long long cnt = 0;
    long long preCnt = 1;
    for (int i=1; i<N; i++) {
        if (S[i] == S[i-1]) ++preCnt;
        else {
            cnt += 1LL*preCnt*(preCnt-1)/2;
            preCnt = 1;
        }
    }
    cnt += preCnt*(preCnt-1)/2;
    cout<< cnt;
    return 0;
}
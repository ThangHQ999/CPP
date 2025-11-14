#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        map<long long,int> cnt;
        long long N;
        cin>> N;
        while (N%2==0)
        {
            cnt[2]++;
            N/=2;
        }
        for (long long i=3; i<=sqrt(N); i+=2) {
            while (N%i==0)
            {
                cnt[i]++;
                N/=i;
            }
        }
        if (N>1) cnt[N]++;
        for (auto &p: cnt) {
            if (p.second>0) {
                for (int k=0; k<p.second; k++) {
                    cout<< p.first << " ";
                }
            } 
        }
        cout<< "\n";
    }
    
    return 0;
}
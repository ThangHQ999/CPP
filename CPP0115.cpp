#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int N;
        cin>> N;
        int count[10000] = {0};
 
        while (N%2==0)
        {
            count[2]++;
            N/=2;
        }
        for (int i=3; i<=sqrt(N); i++) {
            while (N%i==0)
            {
                count[i]++;
                N/=i;
            }
        }
        if (N>1) count[N]++;
        for (int i=0; i<10000; i++) {
            if (count[i]>0) {
                cout<< i << " " << count[i] << " ";
            }
        }
        cout<< "\n";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int N, X;
        cin>> N >> X;
        vector <int> A(N);
        for (int i=0; i<N; i++) {
            cin>> A[i];
        }
        map <int, int> freq;
        for (int i=0; i<N; i++) {
            freq[A[i]]++;
        }
        if (freq[X] > 0) {
            cout<< freq[X] <<"\n";
        } else {
            cout<< -1 <<"\n";
        }
    }
    
    return 0;
}
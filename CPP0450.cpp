#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int N;
        cin>> N;
        vector <int> A(N);
        for (int i=0; i<N; i++) {
            cin>> A[i];
        }
        map <int, int> freq;
        bool find = false;
        for (int i=0; i<N; i++) {
            freq[A[i]]++;
            if (freq[A[i]]>1) {
                cout<< A[i] <<"\n";
                find = true;
                break;
            }
        }
        if (!find) {
            cout<< -1 <<"\n";
        }
    }
    
    return 0;
}
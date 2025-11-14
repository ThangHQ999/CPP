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
        for (int i=0; i<N; i++) {
            freq[A[i]]++;
        }
        vector <int> v;
        for (const auto x:freq) {
            v.push_back(x.first);
        }
        sort(v.begin(), v.end());
        if (v.size()>1) {
            cout<< v[0] << " " << v[1] << "\n";
        } else {
            cout<< -1 << "\n";
        }
    }
    
    return 0;
}
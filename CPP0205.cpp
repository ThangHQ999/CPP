#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int n;
        cin>> n;
        int res = 0;
        for (int i=0; i<n; i++) {
            int a;
            cin>> a;
            if (a>=res) res = a;
        }
        cout<< res << "\n";
    }
    
    return 0;
}
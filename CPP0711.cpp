#include <bits/stdc++.h>
using namespace std;

bool isFinal;

void sinh(vector<int>& a, int n) {
    int i =n;
    while (i>=1 && a[i] == 1)
    {
        a[i] = 0;
        --i;
    }
    if (i==0) {
        isFinal = false;
    } else {
        a[i] = 1;
    }
}

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int N;
        cin>> N;
        isFinal = true;
        vector<int> a(N+1, 0);
        while (isFinal)
        {
            for (int i=1; i<= N; i++) {
                cout<< a[i];
            }
            cout<< " ";
            sinh(a, N);
        }
        cout<< endl;
    }
    
    return 0;
}
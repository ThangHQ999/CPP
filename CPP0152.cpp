#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int a, m;
        cin>> a >> m;
        bool isPass = false;
        for (int x=0; x<m; x++) {
            if ((1LL*a*x)%m == 1) {
                cout<< x <<"\n";
                isPass = true;
                break;
            }
        }
        if (!isPass) cout<< "-1\n";
    }
    return 0;
}
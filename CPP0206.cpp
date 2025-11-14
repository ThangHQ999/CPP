#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int n;
        cin>> n;
        vector <int> A;
        for (int i=0; i<n; i++) {
            int num;
            cin>> num;
            A.push_back(num);
        }
        cout<< *max_element(A.begin(), A.end()) << "\n";
    }
    return 0;
}
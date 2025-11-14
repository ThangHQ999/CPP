#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int n, d;
        cin>> n >> d;
        vector <int> A;
        for (int i=0; i<n; i++) {
            int num;
            cin>> num;
            A.push_back(num);
        }
        for (int i=d; i<n; i++) {
            cout<< A[i] << " ";
        }
        for (int i=0; i<d; i++) {
            cout<< A[i] << " ";
        }
        cout<< "\n";
    }
    return 0;
}
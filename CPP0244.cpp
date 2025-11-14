#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>> n;
    vector <int> A;
    for (int i=0; i<n; i++) {
        int num;
        cin>> num;
        A.push_back(num);
    }
    set<int> S(A.begin(), A.end());
    vector <int> distinct(S.begin(), S.end());
    sort(distinct.begin(), distinct.end());
    for (int x:distinct) cout<< x << " ";
    cout<< "\n";
    return 0;
}
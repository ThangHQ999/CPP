#include <bits/stdc++.h>
using namespace std;

bool isReversible(long long n) {
    vector<int> arr;
    while (n>0)
    {
        arr.push_back(n%10);
        n/=10;
    }
    int len = arr.size();
     for (int i=0; i < len; i++) {
        if (arr[i] != arr[len-1-i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        long long n;
        cin>> n;
        if (isReversible(n)) {
            cout<< "YES\n";
        } else {
            cout<< "NO\n";
        } 
    }
    return 0;
}
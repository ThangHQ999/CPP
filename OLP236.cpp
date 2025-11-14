#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(long long n) {
    vector<int> a;
    while (n>0)
    {
        a.push_back(n%10);
        n/=10;
    }
    int len = a.size();
    int mistake = 0;
    for (int i=0; i< len/2; i++) {
        if (a[i] != a[len-1-i]) {
            mistake++;
            if (mistake>1) return false;
        } 
    }
    return true;
}

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        long long A, B;
        cin>> A >> B;
        int cnt = 0;
        for (long long i=A; i<=B; i++) {
            if (isPalindrome(i)) cnt++;
        }
        cout<< cnt << "\n";
    }
    
    return 0;
}
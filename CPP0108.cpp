#include <bits/stdc++.h>

using namespace std;

long long exp(int a, int b) {
    long long res = 1;
    for (int i=0; i<b; i++) {
        res *= a;
    }
    return res;
}

vector<int> convertNumberToVector(long long n) {
    vector<int> arr;
    while (n>0)
    {
        arr.push_back(n%10);
        n/=10;
    }
    reverse(arr.begin(), arr.end());
    return arr;
}

vector<int> increasing, decreasing;

void genIncreasing(int start, int n, string cur) {
    if (cur.size() == n) {
        if (cur[0] != '0') increasing.push_back(stoi(cur));
        return;
    }
    for (int d=start+1; d<=9; d++) {
        genIncreasing(d, n, cur + char('0' + d));
    }
}

void genDecreasing(int start, int n, string cur) {
    if (cur.size() == n) {
        if (cur[0] != '0') decreasing.push_back(stoi(cur));
        return;
    }
    for (int d=start-1; d>=0; d--) {
        genDecreasing(d, n, cur + char('0' + d));
    }
}

bool isPrime(long long n) {
    if (n<2) return false;
    if (n==2 || n==3) return true;
    if (n%2==0) return false;
    for (long long i=3; i*i<= n; i+=2) {
        if (n%i==0) return false;
    }
    return true;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        increasing.clear();
        decreasing.clear();

        for (int d = 1; d <= 9; d++) genIncreasing(d, n, string(1, '0' + d));
        for (int d = 9; d >= 0; d--) genDecreasing(d, n, string(1, '0' + d));

        unordered_set<int> nums(increasing.begin(), increasing.end());
        for (int x : decreasing) nums.insert(x);

        int cnt = 0;
        for (int x : nums)
            if (to_string(x).size() == n && isPrime(x))
                cnt++;

        
        cout<< cnt << "\n";
    }
    
    return 0;
}
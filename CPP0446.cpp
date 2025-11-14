#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; i++) cin >> A[i];
        sort(A.begin(), A.end());
        int left = 0, right =n-1;
        long long bestSum = A[left]+A[right];
        while (left<right)
        {
            long long sum = A[left]+A[right];
            if (abs(bestSum)>abs(sum)) {
                bestSum = sum;
            }
            if (sum<0) left++;
            else right--;
        }
        cout<< bestSum <<"\n";
    }
    return 0;
}
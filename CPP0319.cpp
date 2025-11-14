#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, s;
    cin>> m >> s;
    if (s>9*m || (s==0 && m>1)) {
        cout<<"-1 -1";
        return 0;
    }
    if (s==0 && m==1) {
        cout<<"0 0\n";
        return 0;
    }
    string largest = "";
    int sum = s;
    for (int i=0; i<m; i++) {
        int digit = min(9, sum);
        largest.push_back('0'+digit);
        sum-=digit;
    }
    string smallest = "";
    sum = s;
    for (int i = 0; i < m; i++) {
        for (int d = (i == 0 ? 1 : 0); d <= 9; d++) {
            if (sum - d <= 9 * (m - i - 1)) {
                smallest.push_back('0' + d);
                sum -= d;
                break;
            }
        }
    }
    cout << smallest << " " << largest << "\n";
    return 0;
}
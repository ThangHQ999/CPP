#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>> N;
    int count = 0;
    int start = 1;
    for (int k = 1; k < N; k++) start *= 10;
    int end = start * 10 - 1;
    for (int i=start; i<=end; i++) {
        int chan = 0;
        int le = 0;
        int num = i;
        while (num>0)
        {
            int digit = num%10;
            if (digit%2 ==0) chan++;
            else le++;
            num/=10;
        }
        if (chan == le) {
            count++;
            cout<< i << " ";
        }
        if (count == 10) {
            cout<< "\n";
            count=0;
        }
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        long long N;
        cin>> N;
         int countEven = 0;

        for (long long i = 1; i * i <= N; i++) {
            if (N % i == 0) {
                if (i % 2 == 0) countEven++;      
                long long other = N / i;
                if (other != i && other % 2 == 0)
                    countEven++;
            }
        }

        cout << countEven << "\n";
    }
    
    return 0;
}
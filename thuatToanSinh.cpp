#include <bits/stdc++.h>
using namespace std;

int n, h;
int x[100];

// Quay lui xâu nhị phân
void TryBinary(int i) {
    for (int j=0; j<=1; j++) {
        x[i] = j;
        if (i == n) {
            for (int k=1; k<=n; k++) {
                cout<< x[k];
            }
            cout<< endl;
        } else {
            TryBinary(i+1);
        }
    }
}

// 1 2 3
// 1 2 4
// 1 2 5
// 1 3 4
// 1 3 5
// 1 4 5
// 2 3 4
// 2 3 5
// 2 4 5
// 3 4 5

// Quay lui tổ hợp
void TryCombination(int i) {
    for (int j=x[i-1] + 1; j<=n - h + i; j++) {
        x[i] = j;
        if (i == h) { 
            for (int k=1; k<=h; k++) {
                cout<< x[k];
            }
            cout<< endl;
        } else {
            TryCombination(i+1);
        }
    }
}

// Quay lui hoán vị
// 1 2 3
// 1 3 2
// 2 1 3
// 2 3 1
// 3 1 2
// 3 2 1
void TryHoanVi(int i) {
    for (int j=x[i-1] + 1; j<=n - h + i; j++) {
        x[i] = j;
        if (i == n) { 
            for (int k=1; k<=h; k++) {
                cout<< x[k];
            }
            cout<< endl;
        } else {
            TryHoanVi(i+1);
        }
    }
}

// Quay lui 

int main() {
    cin>> n;
    x[0] = 0;
    TryCombination(1);
    return 0;
}
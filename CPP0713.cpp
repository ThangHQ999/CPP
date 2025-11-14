#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> X(25);
bool OK=true;

void KhoiTao() {
    for (int i=0; i<N; i++) {
        X[i] = i+1;
    }
}

void Result() {
    for (int i=0; i<N; i++) {
        cout<< X[i];
    }
    cout<< " ";
}

bool SinhHoanVi() {
    int i = N - 2;
    while (i >= 0 && X[i] > X[i + 1]) i--;
    if (i < 0) return false;
    int j = N - 1;
    while (X[j] < X[i]) j--;
    swap(X[i], X[j]);
    reverse(X.begin() + i + 1, X.end());
    return true;
}


int main() {
    int T;
    cin>> T;
    while (T--)
    {
        OK=true;
        cin>> N;
        KhoiTao();
        while (OK)
        {
            Result();
            OK = SinhHoanVi();
        }
        cout<< endl;
    }
    
    return 0;
}
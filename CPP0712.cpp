#include <bits/stdc++.h>
using namespace std;

vector<int> arr(25);
int N, K;
bool OK = true;
void Result() {
    for (int i=0; i<K; i++) {
        cout<< arr[i];
    }
    cout<< " ";
}

void khoiTao() {
    for (int i=0; i<K; i++) {
        arr[i] = i+1;
    }
}

void sinhToHop() {
    int i=K-1;
    while (i>=0 && arr[i] == N-K+i+1)
    {
        i--;
    }
    if (i>=0) {
        arr[i] = arr[i] + 1;
        for (int j=i+1; j<K; j++) {
            arr[j] = arr[j-1] + 1;
        }
    } else {
        OK = false;
    }
}


int main() {
    int T;
    cin>> T;
    while (T--)
    {
        OK=true;
        cin>> N >> K;
        khoiTao();
        while (OK) 
        {
            Result();
            sinhToHop();
        }
        cout<< "\n";
    }
    return 0;
}
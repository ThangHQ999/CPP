#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    cin.ignore();
    while (T--)
    {
        string num;
        cin>> num;
        bool isLucky = true;
        int len = num.length();
        if (len<2) isLucky = false;
        if (num[len-1] != '6' || num[len-2] != '8') isLucky = false;
        if (isLucky) {
            cout<< "1\n";
        } else {
            cout<< "0\n";
        }
    }
    
    return 0;
}
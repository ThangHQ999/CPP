#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    cin.ignore();
    while (T--)
    {
        string str;
        cin>> str;
        bool isPass = true;
        for (int i=0; i<str.length()-1; i++) {
            int diff = (int) str[i]-str[i+1];
            if (diff != 1 && diff != -1) {
                isPass = false;
                break;
            }
        }
        if (isPass) {
            cout<< "YES\n";
        } else {
            cout<< "NO\n";
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    cin.ignore();
    while (T--)
    {
        string S;
        cin>> S;
        char prevChar=S[0];
        int count = 0;
        for (int i=0; i<S.length(); i++) {
            if (i<S.length()-1) {
                if (prevChar == S[i]) {
                    count++;
                } else {
                    cout<< prevChar << count;
                    count = 0;
                    prevChar = S[i];
                    count++;
                }
            } else {
                if (prevChar == S[i]) {
                    count++;
                    cout<< prevChar << count;
                } else {
                    cout<< prevChar << count;
                    count = 0;
                    prevChar = S[i];
                    count++;
                    cout<< prevChar << count;
                }
            }
        }
        cout<< "\n";
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    cin.ignore();
    while (T--)
    {
        string S;
        getline(cin, S);
        int len = S.length();
        vector <string> arr;
        int end = len;
        for (int i=len-1; i>=0; i--) {
            if ( S[i] == ' ') {
                if (i+1 <end) {
                    arr.push_back(S.substr(i+1, end-i-1));
                }
                end = i;
            }
        }
        if (end>0) {
            arr.push_back(S.substr(0, end));
        }
        for (int i=0; i<arr.size(); i++) {
            cout<< arr[i];
            if (i < arr.size()-1) {
                cout<< " ";
            }
        }
        cout<< "\n";
    }
    return 0;
}
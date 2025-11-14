#include <bits/stdc++.h>
using namespace std;

int main () {
    int T;
    cin>> T;
    while (T--)
    {
        char c;
        cin>> c;
        if (c>=65 && c<= 90) {
            cout<< char(tolower(c)) << "\n";
        }
        if (c>=97 && c<=122) {
            cout<< char(toupper(c)) << "\n";
        }
    }
    
    return 0;
}
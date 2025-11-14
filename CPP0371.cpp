#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin>> S;
    string result;
    for (char c:S) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
            continue;
        } 
        result.push_back('.');
        result.push_back(c);
    }
    cout<< result <<"\n";
    return 0;
}
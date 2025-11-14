#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    cin.ignore();
    while (t--)
    {
        string code;
        cin>> code;
        size_t pos = code.find("084");
        code.replace(pos, 3, "");
        cout<< code << "\n";
    }
    
    return 0;
}
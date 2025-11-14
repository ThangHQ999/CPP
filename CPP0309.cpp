#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    cin.ignore();
    while (T--)
    {
        string str;
        getline(cin, str);
        int words = 0;
        stringstream ss(str);
        string s;
        while (ss >> s )
        {
            words++;
        }
        cout<< words << "\n";
    }
    
    return 0;
}
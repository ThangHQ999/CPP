#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>> n;
    cin.ignore();
    vector<string> wishes;
    for (int i=0; i<n; i++)
    {
        string wish;
        getline(cin, wish);
        int len = wishes.size();
        if (len == 0) {
            wishes.push_back(wish);
        } else {
            bool exits = false;
            for (int i=0; i<len; i++) {
                if (wish == wishes[i]) exits = true;
            }
            if (!exits) {
                wishes.push_back(wish);
            }
        }
    }
    cout<<wishes.size();
    return 0;
}

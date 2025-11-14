#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("PTIT.in");
    ofstream fout("PTIT.out");
    string line;
    while (getline(fin, line))
    {
        fout<< line << "\n";
    }
    fin.close();
    fout.close();
    return 0;
}
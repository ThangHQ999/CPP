#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    cin.ignore();
    while (T--)
    {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector <int> A;
        int num;
        while (ss>>num) 
        {
            A.push_back((int)(num-'0'));
        }
        int len = A.size();
        int oddQuantity = 0;
        int evenQuantity = 0;
        for (int a:A) {
            if (a%2==0) {
                evenQuantity++;
            } else {
                oddQuantity++;
            }
        }
        if ((evenQuantity>oddQuantity && len%2==0) || (oddQuantity>evenQuantity && len%2!=0)) {
            cout<< "YES" << "\n";
        } else {
            cout<< "NO" << "\n";
        }
    }
    
    return 0;
}
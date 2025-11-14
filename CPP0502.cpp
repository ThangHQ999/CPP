#include <bits/stdc++.h>
using namespace std;

struct ThiSinh {
    string name, birthDay;
    vector <double> marks;
};

void nhap(ThiSinh &S) {
    getline(cin, S.name);
    getline(cin, S.birthDay);
    double mark;
    for (int i=0; i<3; i++) {
        cin>> mark;
        S.marks.push_back(mark);
    }
    cin.ignore();
}

void in(ThiSinh S) {
    double total = 0;
    for (double m:S.marks) {
        total += m;
    }
    cout<< S.name << " " << S.birthDay << " " << fixed << setprecision(1) << total << "\n";
}

int main() {
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
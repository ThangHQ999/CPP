#include <bits/stdc++.h>
using namespace std;

struct NhanVien {
    string code = "00001";
    string name;
    string gender;
    string birthDay;
    string location;
    string taxCode;
    string signingDate;
};

void nhap(NhanVien &S) {
    getline(cin, S.name);
    getline(cin, S.gender);
    getline(cin, S.birthDay);
    getline(cin, S.location);
    getline(cin, S.taxCode);
    getline(cin, S.signingDate);
}

void in(NhanVien S) {
    cout<< S.code << " " << S.name << " " << S.gender << " " << S.birthDay << " " << S.location << " " << S.taxCode << " " << S.signingDate;
}

int main() {
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
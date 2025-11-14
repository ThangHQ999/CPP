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

istream& operator>>(istream& in, NhanVien &S) {
    getline(in, S.name);
    getline(in, S.gender);
    getline(in, S.birthDay);
    getline(in, S.location);
    getline(in, S.taxCode);
    getline(in, S.signingDate);
    return in;
}

ostream& operator<<(ostream& out, NhanVien &S) {
    out<< S.code << " " << S.name << " " << S.gender << " " << S.birthDay << " " << S.location << " " << S.taxCode << " " << S.signingDate;
    return out;
}

int main() {
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}
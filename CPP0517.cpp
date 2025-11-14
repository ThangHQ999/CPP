#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

struct NhanVien {
    string code;
    string name;
    string gender;
    string birthDay;
    string location;
    string taxCode;
    string signingDate;
};
void readNonEmptyLine(string &s) {
    while (true) {
        if (!getline(cin, s)) break;
        if (!s.empty()) break;       
    }
}

void nhap(NhanVien &nv) {
    string tmp;
    readNonEmptyLine(tmp);
    nv.name = tmp;
    readNonEmptyLine(tmp);
    nv.gender = tmp;
    readNonEmptyLine(tmp);
    nv.birthDay = tmp;
    readNonEmptyLine(tmp);
    nv.location = tmp;
    readNonEmptyLine(tmp);
    nv.taxCode = tmp;
    readNonEmptyLine(tmp);
    nv.signingDate = tmp;

    cnt++;
    string code = to_string(cnt);
    while (code.size() < 5) code = "0" + code;
    nv.code = code;
}

void inds(NhanVien ds[], int n) {
    for (int i=0; i<n; i++) {
        cout
            << ds[i].code << " " 
            << ds[i].name << " " 
            << ds[i].gender << " " 
            << ds[i].birthDay << " " 
            << ds[i].location << " " 
            << ds[i].taxCode << " " 
            << ds[i].signingDate << "\n";
    }
}

int main() {
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
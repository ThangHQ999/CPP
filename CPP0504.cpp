#include <bits/stdc++.h>
using namespace std;

vector<string> split(const string &s, char delimiter) {
    vector<string> tokens;
    string token;
    for (char c : s) {
        if (c == delimiter) {
            tokens.push_back(token);
            token.clear();
        } else {
            token.push_back(c);
        }
    }
    if (!token.empty()) tokens.push_back(token);
    return tokens;
}

struct SinhVien {
    string code = "B20DCCN001";
    string name;
    string classUniversity;
    string birthDay;
    double gpa;
};

void nhap(SinhVien &S) {
    getline(cin, S.name);
    cin>> S.classUniversity;
    cin>> S.birthDay;
    cin>> S.gpa;
    vector <string> parts = split(S.birthDay, '/');
    S.birthDay = "";
    parts[0].length() == 2 ? S.birthDay += parts[0] : S.birthDay+= "0" + parts[0];
    S.birthDay+="/";
    parts[1].length() == 2 ? S.birthDay += parts[1] : S.birthDay+= "0" + parts[1];
    S.birthDay+="/";
    S.birthDay+=parts[2];
}

void in(SinhVien S) {
    cout<< S.code << " " << S.name << " " << S.classUniversity << " " << S.birthDay << " " << fixed << setprecision(2) << S.gpa;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
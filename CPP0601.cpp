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
    float gpa;

    void nhap() {
        getline(cin, name);
        cin>> classUniversity;
        cin>> birthDay;
        cin>> gpa;
        vector <string> parts = split(birthDay, '/');
        birthDay = "";
        parts[0].length() == 2 ? birthDay += parts[0] : birthDay+= "0" + parts[0];
        birthDay+="/";
        parts[1].length() == 2 ? birthDay += parts[1] : birthDay+= "0" + parts[1];
        birthDay+="/";
        birthDay+=parts[2];
    }

    void xuat() {
        cout<< code << " " << name << " " << classUniversity << " " << birthDay << " " << fixed << setprecision(2) << gpa << "\n";
    }
};

int main() {
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
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
    string name = "";
    string classUniversity = "";
    string birthDay = "";
    float gpa = 0;
};

istream& operator>>(istream &in, SinhVien &sv) {
    getline(in, sv.name);
    in>> sv.classUniversity;
    in>> sv.birthDay;
    in>> sv.gpa;
    in.ignore(); 
    vector <string> parts = split(sv.birthDay, '/');
    sv.birthDay = "";
    parts[0].length() == 2 ? sv.birthDay += parts[0] : sv.birthDay+= "0" + parts[0];
    sv.birthDay+="/";
    parts[1].length() == 2 ? sv.birthDay += parts[1] : sv.birthDay+= "0" + parts[1];
    sv.birthDay+="/";
    sv.birthDay+=parts[2];
    return in;
} 

ostream& operator<<(ostream &out, const SinhVien &sv) {
    out
        << sv.code << " " 
        << sv.name << " " 
        << sv.classUniversity << " " 
        << sv.birthDay << " " 
        << fixed << setprecision(2) << sv.gpa << "\n";
    return out;
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
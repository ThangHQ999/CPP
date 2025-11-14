#include <bits/stdc++.h>
using namespace std;

int id = 1;

class SinhVien {
public:
    string msv, ten, lop, nsinh;
    float gpa;

    friend istream &operator >> (istream &is, SinhVien &a) {
        is.ignore();
        getline(is, a.ten);
        is >> a.lop >> a.nsinh >> a.gpa;

        // Mã SV
        string s = to_string(id++);
        while (s.length() < 3) s = '0' + s;
        a.msv = "B20DCCN" + s;

        // Chuẩn hóa tên
        stringstream ss(a.ten);
        string word;
        a.ten.clear();
        while (ss >> word) {
            for (auto &c : word) c = tolower(c);
            word[0] = toupper(word[0]);
            a.ten += word + " ";
        }
        if (!a.ten.empty()) a.ten.pop_back();

        // Chuẩn hóa ngày sinh
        if (a.nsinh[1] == '/') a.nsinh = "0" + a.nsinh;
        if (a.nsinh[4] == '/') a.nsinh.insert(3, "0");

        return is;
    }

    friend ostream &operator << (ostream &os, const SinhVien &a) {
        os << a.msv << " " << a.ten << " " << a.lop << " "
           << a.nsinh << " " << fixed << setprecision(2) << a.gpa << "\n";
        return os;
    }
};

int main() {
    int N;
    cin >> N;
    SinhVien ds[50];
    for (int i = 0; i < N; i++) cin >> ds[i];
    for (int i = 0; i < N; i++) cout << ds[i];
    return 0;
}
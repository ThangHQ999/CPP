#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

struct Nguoi {
    string ten;
    int ngay;
    int thang;
    int nam;
};

void parse_date(const string& date_str, int& d, int& m, int& y) {
    stringstream ss(date_str);
    string segment;
    vector<int> parts;

    while (getline(ss, segment, '/')) {
        parts.push_back(stoi(segment));
    }

    if (parts.size() == 3) {
        d = parts[0]; 
        m = parts[1];
        y = parts[2]; 
    }
}

bool la_som_hon(const Nguoi& a, const Nguoi& b) {
    if (a.nam != b.nam) {
        return a.nam < b.nam;
    }

    if (a.thang != b.thang) {
        return a.thang < b.thang;
    }

    return a.ngay < b.ngay;
}

void giai_quyet() {
    int N;

    if (!(cin >> N)) return; 

    vector<Nguoi> danh_sach;
    

    for (int i = 0; i < N; ++i) {
        string ten, ngay_sinh_str;
        if (!(cin >> ten >> ngay_sinh_str)) break;
        
        Nguoi nguoi_moi;
        nguoi_moi.ten = ten;
        
        parse_date(ngay_sinh_str, nguoi_moi.ngay, nguoi_moi.thang, nguoi_moi.nam);
        
        danh_sach.push_back(nguoi_moi);
    }

    if (danh_sach.empty()) {
        return;
    }

    Nguoi nguoi_tre_nhat = danh_sach[0];
    Nguoi nguoi_gia_nhat = danh_sach[0];

    for (const auto& nguoi : danh_sach) {
        if (la_som_hon(nguoi, nguoi_gia_nhat)) {
            nguoi_gia_nhat = nguoi;
        }

        if (la_som_hon(nguoi_tre_nhat, nguoi)) {
            nguoi_tre_nhat = nguoi;
        }
    }

    cout << nguoi_tre_nhat.ten << endl;
    cout << nguoi_gia_nhat.ten << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    giai_quyet();

    return 0;
}
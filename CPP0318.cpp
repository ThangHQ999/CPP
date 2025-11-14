#include <bits/stdc++.h>
using namespace std;

bool tangChat(string str) {
    for (int i=0; i<4; i++) {
        if (str[i] >= str[i+1]) return false;
    }
    return true;
}

bool soBangNhau(string str) {
    for (int i=0; i<4; i++) {
        if (str[i] != str[i+1]) return false;
    }
    return true;
}

bool check3(string str) {
    return (str[0] == str[1] && str[1] == str[2] && str[3] == str[4]);
}

bool check4(string str) {
    for (char p:str) {
        if ((p != '6' && p != '8')) return false;
    }
    return true;
}

bool soDep(string str) {
    return tangChat(str) || soBangNhau(str) || check3(str) || check4(str);
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        string bienSo;
        cin>> bienSo;
        string so = "";
        for (char c: bienSo) {
            if (isdigit(c)) so += c;
        }
        so = so.substr(so.length() - 5);
        cout<< (soDep(so) ? "YES" : "NO") << endl;
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if (b==0) return a;
    return gcd(b, a%b);
}

class PhanSo {
private:
    long long numerator, denominator;

public:
    PhanSo(long long t = 0, long long m = 1) {
        numerator = t;
        denominator = m;
    }

    void rutgon() {
        long long ucln = gcd(abs(numerator), abs(denominator));
        numerator /= ucln;
        denominator /= ucln;
        if (denominator < 0) { 
            denominator = -denominator;
            numerator = -numerator;
        }
    }

    friend istream& operator>>(istream &in, PhanSo &p) {
        in >> p.numerator >> p.denominator;
        return in;
    }

    friend ostream& operator<<(ostream &out, const PhanSo &p) {
        out << p.numerator << "/" << p.denominator;
        return out;
    }
};

int main() {
    PhanSo p(1, 1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
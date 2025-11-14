#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if (b==0) return a;
    return gcd(b, a%b);
}

struct PhanSo {
    long long numerator;
    long long denominator;
};

void nhap(PhanSo &S) {
    cin>> S.numerator;
    cin>> S.denominator;
}

void rutgon(PhanSo &S) {
    long long ucln = gcd(S.numerator, S.denominator);
    S.numerator /= ucln;
    S.denominator /= ucln;
}

PhanSo tong(PhanSo a, PhanSo b) {
    PhanSo c;
    rutgon(a);
    rutgon(b);
    c.numerator  = a.numerator*b.denominator + b.numerator*a.denominator;
    c.denominator = a.denominator*b.denominator;
    rutgon(c);
    return c;
}

void in(PhanSo S) {
    cout<< S.numerator << "/" <<S.denominator;
}

int main() {
    struct PhanSo p, q;
    nhap(p);
    nhap(q);
    PhanSo t = tong(p,q);
	in(t);
    return 0;
}
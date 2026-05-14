#include <iostream>

using namespace std;

long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

class PhanSo {
public:
    long long tu, mau;
    PhanSo(long long t=1, long long m=1) : tu(t), mau(m) {}
    friend istream& operator >> (istream &in, PhanSo &p) {
        in >> p.tu >> p.mau;
        return in;
    }
    void rutgon() {
        long long g = gcd(tu, mau);
        tu /= g;
        mau /= g;
    }
    friend PhanSo operator + (const PhanSo &a, const PhanSo &b) {
        long long g = gcd(a.mau, b.mau);
        long long lcm = (a.mau / g) * b.mau;
        long long t = a.tu * (lcm / a.mau) + b.tu * (lcm / b.mau);
        PhanSo res(t, lcm);
        res.rutgon();
        return res;
    }
    friend ostream& operator << (ostream &out, const PhanSo &p) {
        out << p.tu << "/" << p.mau;
        return out;
    }
};

int main() {
    PhanSo p(1,1), q(1,1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}
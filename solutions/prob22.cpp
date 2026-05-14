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
private:
    long long tu, mau;
public:
    PhanSo(long long t, long long m) : tu(t), mau(m) {}
    friend istream& operator >> (istream &in, PhanSo &p) {
        in >> p.tu >> p.mau;
        return in;
    }
    void rutgon() {
        long long g = gcd(tu, mau);
        tu /= g;
        mau /= g;
    }
    friend ostream& operator << (ostream &out, const PhanSo &p) {
        out << p.tu << "/" << p.mau;
        return out;
    }
};

int main() {
    PhanSo p(1,1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}
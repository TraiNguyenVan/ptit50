#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct SinhVien {
    string ma, ten, lop, email;
};

bool cmp(const SinhVien& a, const SinhVien& b) {
    if (a.lop == b.lop) return a.ma < b.ma;
    return a.lop < b.lop;
}

int main() {
    int N;
    if (!(cin >> N)) return 0;
    vector<SinhVien> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i].ma;
        cin >> ws;
        getline(cin, a[i].ten);
        if (!a[i].ten.empty() && a[i].ten.back() == '\r') a[i].ten.pop_back();
        cin >> a[i].lop >> a[i].email;
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < N; i++) {
        cout << a[i].ma << " " << a[i].ten << " " << a[i].lop << " " << a[i].email << "\n";
    }
    return 0;
}

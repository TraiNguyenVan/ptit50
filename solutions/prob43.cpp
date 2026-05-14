#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct SinhVien {
  string ma, ten, lop, email;
};

bool cmp(const SinhVien& a, const SinhVien& b) {
  return a.ma < b.ma;
}

int main() {
  vector<SinhVien> a;
  SinhVien sv;
  while (cin >> sv.ma) {
    cin >> ws;
    getline(cin, sv.ten);
    if (!sv.ten.empty() && sv.ten.back() == '\r')
      sv.ten.pop_back();
    cin >> sv.lop >> sv.email;
    a.push_back(sv);
  }
  sort(a.begin(), a.end(), cmp);
  for (size_t i = 0; i < a.size(); i++) {
    cout << a[i].ma << " " << a[i].ten << " " << a[i].lop << " " << a[i].email << "\n";
  }
  return 0;
}

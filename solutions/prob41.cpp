#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

class NhanVien {
public:
  string ma, ten, gioi_tinh, ngay_sinh, dia_chi, mst, ngay_ky;
  static int cnt;
  friend istream& operator>>(istream& is, NhanVien& a) {
    is >> ws;
    if (is.eof())
      return is;
    getline(is, a.ten);
    if (!a.ten.empty() && a.ten.back() == '\r')
      a.ten.pop_back();
    getline(is, a.gioi_tinh);
    if (!a.gioi_tinh.empty() && a.gioi_tinh.back() == '\r')
      a.gioi_tinh.pop_back();
    getline(is, a.ngay_sinh);
    if (!a.ngay_sinh.empty() && a.ngay_sinh.back() == '\r')
      a.ngay_sinh.pop_back();
    getline(is, a.dia_chi);
    if (!a.dia_chi.empty() && a.dia_chi.back() == '\r')
      a.dia_chi.pop_back();
    getline(is, a.mst);
    if (!a.mst.empty() && a.mst.back() == '\r')
      a.mst.pop_back();
    getline(is, a.ngay_ky);
    if (!a.ngay_ky.empty() && a.ngay_ky.back() == '\r')
      a.ngay_ky.pop_back();
    string id = to_string(cnt++);
    while (id.length() < 5)
      id = "0" + id;
    a.ma = id;
    return is;
  }
  friend ostream& operator<<(ostream& os, const NhanVien& a) {
    os << a.ma << " " << a.ten << " " << a.gioi_tinh << " " << a.ngay_sinh << " " << a.dia_chi
       << " " << a.mst << " " << a.ngay_ky << "\n";
    return os;
  }
};

int NhanVien::cnt = 1;

int main() {
  NhanVien ds[50];
  int N, i;
  cin >> N;
  for (i = 0; i < N; i++)
    cin >> ds[i];
  for (i = 0; i < N; i++)
    cout << ds[i];
  return 0;
}

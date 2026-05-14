#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct SinhVien {
  string ma, ten, lop, email;
};

string to_upper(string s) {
  for (char& c : s)
    c = toupper(c);
  return s;
}

int main() {
  int N;
  if (!(cin >> N))
    return 0;
  vector<SinhVien> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a[i].ma;
    cin >> ws;
    getline(cin, a[i].ten);
    if (!a[i].ten.empty() && a[i].ten.back() == '\r')
      a[i].ten.pop_back();
    cin >> a[i].lop >> a[i].email;
  }
  int Q;
  if (!(cin >> Q))
    return 0;
  cin >> ws;
  while (Q--) {
    string nganh;
    getline(cin, nganh);
    if (!nganh.empty() && nganh.back() == '\r')
      nganh.pop_back();

    string nganh_upper = to_upper(nganh);
    cout << "DANH SACH SINH VIEN NGANH " << nganh_upper << ":" << "\n";

    string ma_nganh = "";
    if (nganh == "Ke toan")
      ma_nganh = "DCKT";
    else if (nganh == "Cong nghe thong tin")
      ma_nganh = "DCCN";
    else if (nganh == "An toan thong tin")
      ma_nganh = "DCAT";
    else if (nganh == "Vien thong")
      ma_nganh = "DCVT";
    else if (nganh == "Dien tu")
      ma_nganh = "DCDT";

    for (int i = 0; i < N; i++) {
      if (a[i].ma.length() >= 7 && a[i].ma.substr(3, 4) == ma_nganh) {
        if ((ma_nganh == "DCCN" || ma_nganh == "DCAT") && a[i].lop[0] == 'E')
          continue;
        cout << a[i].ma << " " << a[i].ten << " " << a[i].lop << " " << a[i].email << "\n";
      }
    }
  }
  return 0;
}

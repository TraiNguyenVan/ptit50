#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct SinhVien {
  string ma, ten, lop, ns;
  float gpa;
};

string chuanHoaTen(string s) {
  stringstream ss(s);
  string token, res = "";
  while (ss >> token) {
    token[0] = toupper(token[0]);
    for (int i = 1; i < token.length(); ++i) {
      token[i] = tolower(token[i]);
    }
    res += token + " ";
  }
  if (res.length() > 0)
    res.pop_back();
  return res;
}

void nhap(SinhVien ds[], int N) {
  for (int i = 0; i < N; ++i) {
    cin >> ws;
    string name;
    getline(cin, name);
    ds[i].ten = chuanHoaTen(name);
    cin >> ds[i].lop >> ds[i].ns >> ds[i].gpa;

    stringstream ss;
    ss << "B20DCCN" << setfill('0') << setw(3) << (i + 1);
    ds[i].ma = ss.str();

    string d, m, y;
    stringstream ns_ss(ds[i].ns);
    getline(ns_ss, d, '/');
    getline(ns_ss, m, '/');
    getline(ns_ss, y, '/');
    if (d.length() == 1)
      d = "0" + d;
    if (m.length() == 1)
      m = "0" + m;
    ds[i].ns = d + "/" + m + "/" + y;
  }
}

void in(SinhVien ds[], int N) {
  for (int i = 0; i < N; ++i) {
    cout << ds[i].ma << " " << ds[i].ten << " " << ds[i].lop << " " << ds[i].ns << " ";
    cout << fixed << setprecision(2) << ds[i].gpa << "\n";
  }
}

int main() {
  struct SinhVien ds[50];
  int N;
  if (cin >> N) {
    nhap(ds, N);
    in(ds, N);
  }
  return 0;
}

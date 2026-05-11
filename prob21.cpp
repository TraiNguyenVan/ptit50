#include <iostream>
#include <string>

using namespace std;

struct NhanVien {
  string name;
  string gender;
  string dob;
  string address;
  string tax;
  string date;
};

void clean(string &str) {
  while (!str.empty() && (str.back() == '\r' || str.back() == '\n')) {
    str.pop_back();
  }
}

void nhap(NhanVien &a) {
  getline(cin, a.name);
  clean(a.name);
  getline(cin, a.gender);
  clean(a.gender);
  getline(cin, a.dob);
  clean(a.dob);
  getline(cin, a.address);
  clean(a.address);
  getline(cin, a.tax);
  clean(a.tax);
  getline(cin, a.date);
  clean(a.date);
}

void in(NhanVien &a) {
  cout << "00001 " << a.name << " " << a.gender << " " << a.dob << " "
       << a.address << " " << a.tax << " " << a.date;
}

int main() {
  NhanVien a;
  nhap(a);
  in(a);
  return 0;
}

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

struct ThiSinh {
  string name;
  string dob;
  float p1, p2, p3;
};

int main() {
  ThiSinh ts;
  getline(cin, ts.name);
  cin >> ts.dob;
  cin >> ts.p1 >> ts.p2 >> ts.p3;
  float total = ts.p1 + ts.p2 + ts.p3;
  cout << ts.name << " " << ts.dob << " " << fixed << setprecision(1) << total << "\n";
  return 0;
}

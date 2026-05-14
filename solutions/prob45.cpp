#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct GiangVien {
  string ma, ten, bo_mon, ma_bo_mon;
};

string get_ma_bm(string bo_mon) {
  stringstream ss(bo_mon);
  string word;
  string ma = "";
  while (ss >> word) {
    ma += toupper(word[0]);
  }
  return ma;
}

string to_lower(string s) {
  for (char &c : s)
    c = tolower(c);
  return s;
}

int main() {
  int N;
  if (!(cin >> N))
    return 0;
  cin >> ws;
  vector<GiangVien> a(N);
  for (int i = 0; i < N; i++) {
    getline(cin, a[i].ten);
    if (!a[i].ten.empty() && a[i].ten.back() == '\r')
      a[i].ten.pop_back();
    getline(cin, a[i].bo_mon);
    if (!a[i].bo_mon.empty() && a[i].bo_mon.back() == '\r')
      a[i].bo_mon.pop_back();

    string id = to_string(i + 1);
    while (id.length() < 2)
      id = "0" + id;
    a[i].ma = "GV" + id;
    a[i].ma_bo_mon = get_ma_bm(a[i].bo_mon);
  }
  int Q;
  if (!(cin >> Q))
    return 0;
  cin >> ws;
  while (Q--) {
    string keyword;
    getline(cin, keyword);
    if (!keyword.empty() && keyword.back() == '\r')
      keyword.pop_back();

    cout << "DANH SACH GIANG VIEN THEO TU KHOA " << keyword << ":" << "\n";
    string keyword_lower = to_lower(keyword);

    for (int i = 0; i < N; i++) {
      if (to_lower(a[i].ten).find(keyword_lower) != string::npos) {
        cout << a[i].ma << " " << a[i].ten << " " << a[i].ma_bo_mon << "\n";
      }
    }
  }
  return 0;
}

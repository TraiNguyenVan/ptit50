#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Company {
  string id;
  string name;
  int slots;
};

bool cmp(const Company& a, const Company& b) {
  if (a.slots == b.slots)
    return a.id < b.id;
  return a.slots > b.slots;
}

int main() {
  int n;
  if (!(cin >> n))
    return 0;
  vector<Company> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> ws;
    getline(cin, v[i].id);
    getline(cin, v[i].name);
    cin >> v[i].slots;
  }
  sort(v.begin(), v.end(), cmp);
  for (int i = 0; i < n; ++i) {
    cout << v[i].id << " " << v[i].name << " " << v[i].slots << "\n";
  }
  return 0;
}

#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
int main() {
  int t;
  cin >> t;
  vector<long long> results(t);
  for (int i = 0; i < t; i++) {
    string s;
    cin >> s;
    map<char, long long> cnt;
    for (char c : s)
      cnt[c]++;
    long long res = 0;
    for (auto it : cnt) {
      res += it.second * (it.second + 1) / 2;
    }
    results[i] = res;
  }
  for (int i = 0; i < t; i++) {
    cout << results[i] << "\n";
  }
  return 0;
}

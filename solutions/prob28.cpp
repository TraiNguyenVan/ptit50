#include <iostream>
#include <string>

using namespace std;

void solve() {
  string s;
  cin >> s;
  int n = s.length();
  int i = n - 2;
  while (i >= 0 && s[i] <= s[i + 1]) {
    i--;
  }
  if (i < 0) {
    cout << "-1\n";
    return;
  }
  int best_j = -1;
  char max_c = 0;
  for (int j = i + 1; j < n; ++j) {
    if (s[j] < s[i]) {
      if (s[j] > max_c) {
        max_c = s[j];
        best_j = j;
      }
    }
  }
  if (i == 0 && max_c == '0') {
    cout << "-1\n";
    return;
  }
  swap(s[i], s[best_j]);
  cout << s << "\n";
}

int main() {
  int t;
  if (cin >> t) {
    while (t--) {
      solve();
    }
  }
  return 0;
}

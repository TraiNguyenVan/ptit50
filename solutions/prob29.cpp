#include <iostream>
#include <string>

using namespace std;

void solve() {
  string s;
  cin >> s;
  long long sum = 0;
  long long current_num = 0;
  for (char c : s) {
    if (isdigit(c)) {
      current_num = current_num * 10 + (c - '0');
    } else {
      sum += current_num;
      current_num = 0;
    }
  }
  sum += current_num;
  cout << sum << "\n";
}

int main() {
  int t;
  if (cin >> t) {
    while (t--)
      solve();
  }
  return 0;
}

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
  string s;
  cin >> s;
  string letters = "";
  int sum = 0;
  for (char c : s) {
    if (isalpha(c)) {
      letters += c;
    } else if (isdigit(c)) {
      sum += c - '0';
    }
  }
  sort(letters.begin(), letters.end());
  cout << letters << sum << "\n";
}

int main() {
  int t;
  if (cin >> t) {
    while (t--)
      solve();
  }
  return 0;
}

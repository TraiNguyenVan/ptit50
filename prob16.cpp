#include <iostream>
#include <string>
using namespace std;
void solve() {
  int m, s;
  cin >> m >> s;
  if (s == 0) {
    if (m == 1)
      cout << "0 0\n";
    else
      cout << "-1 -1\n";
    return;
  }
  if (s > 9 * m) {
    cout << "-1 -1\n";
    return;
  }

  int temp = s;
  string smallest = "";
  for (int i = 0; i < m; i++) {
    for (int d = (i == 0 ? 1 : 0); d <= 9; d++) {
      if (temp - d >= 0 && temp - d <= 9 * (m - 1 - i)) {
        smallest += to_string(d);
        temp -= d;
        break;
      }
    }
  }

  temp = s;
  string largest = "";
  for (int i = 0; i < m; i++) {
    for (int d = 9; d >= (i == 0 ? 1 : 0); d--) {
      if (temp - d >= 0 && temp - d <= 9 * (m - 1 - i)) {
        largest += to_string(d);
        temp -= d;
        break;
      }
    }
  }

  cout << smallest << " " << largest << "\n";
}
int main() {
  solve();
  return 0;
}

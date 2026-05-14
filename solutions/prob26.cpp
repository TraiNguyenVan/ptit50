#include <iostream>
#include <vector>

using namespace std;

void solve() {
  int n;
  if (!(cin >> n))
    return;
  vector<long long> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  int l = 0, r = n - 1;
  int ops = 0;
  while (l < r) {
    if (a[l] == a[r]) {
      l++;
      r--;
    } else if (a[l] < a[r]) {
      a[l + 1] += a[l];
      l++;
      ops++;
    } else {
      a[r - 1] += a[r];
      r--;
      ops++;
    }
  }
  cout << ops << "\n";
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

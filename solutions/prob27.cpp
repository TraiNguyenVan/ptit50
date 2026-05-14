#include <iostream>
#include <vector>

using namespace std;

void solve() {
  int n;
  if (!(cin >> n))
    return;
  vector<vector<int>> a(n, vector<int>(n));
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> a[i][j];
    }
  }
  int m;
  cin >> m;
  vector<vector<int>> b(m, vector<int>(m));
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> b[i][j];
    }
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cout << a[i][j] * b[i % m][j % m] << (j == n - 1 ? "" : " ");
    }
    cout << "\n";
  }
}

int main() {
  solve();
  return 0;
}

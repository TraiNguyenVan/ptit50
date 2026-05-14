#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main() {
  int t;
  cin >> t;
  vector<string> results(t);
  for (int idx = 0; idx < t; idx++) {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cin >> a[i][j];
      }
    }
    ostringstream oss;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
          oss << a[i][j] << " ";
        } else {
          oss << "  ";
        }
      }
      oss << "\n";
    }
    results[idx] = oss.str();
  }
  for (int i = 0; i < t; i++) {
    cout << results[i];
  }
  return 0;
}

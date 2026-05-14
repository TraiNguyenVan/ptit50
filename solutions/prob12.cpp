#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
int main() {
  int t;
  cin >> t;
  vector<string> results(t);
  for (int idx = 0; idx < t; idx++) {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    vector<int> row(n, 0), col(m, 0);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        string s;
        cin >> s;
        if (s.length() > 1 && s.length() == m) {
          for (int k = 0; k < m; k++) {
            a[i][k] = s[k] - '0';
            if (a[i][k] == 1) {
              row[i] = 1;
              col[k] = 1;
            }
          }
          j = m;
        } else {
          a[i][j] = stoi(s);
          if (a[i][j] == 1) {
            row[i] = 1;
            col[j] = 1;
          }
        }
      }
    }
    ostringstream oss;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (row[i] || col[j])
          oss << 1 << " ";
        else
          oss << 0 << " ";
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

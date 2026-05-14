#include <iostream>
#include <vector>

using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> mat(n, vector<int>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> mat[i][j];
    }
  }

  int top = 0, bottom = n - 1;
  int left = 0, right = m - 1;

  while (top < bottom && left < right) {
    int prev = mat[top + 1][left];

    for (int i = left; i <= right; i++) {
      int curr = mat[top][i];
      mat[top][i] = prev;
      prev = curr;
    }
    top++;

    for (int i = top; i <= bottom; i++) {
      int curr = mat[i][right];
      mat[i][right] = prev;
      prev = curr;
    }
    right--;

    if (top <= bottom) {
      for (int i = right; i >= left; i--) {
        int curr = mat[bottom][i];
        mat[bottom][i] = prev;
        prev = curr;
      }
      bottom--;
    }

    if (left <= right) {
      for (int i = bottom; i >= top; i--) {
        int curr = mat[i][left];
        mat[i][left] = prev;
        prev = curr;
      }
      left++;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << mat[i][j] << " ";
    }
  }
  cout << "\n";
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
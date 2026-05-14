#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  if (cin >> t) {
    vector<int> results(t);
    for (int i = 0; i < t; i++) {
      int n;
      cin >> n;
      vector<bool> present(1000005, false);
      for (int j = 0; j < n; ++j) {
        int x;
        cin >> x;
        if (x > 0 && x <= 1000000) {
          present[x] = true;
        }
      }
      int missing = 0;
      for (int j = 1; j <= 1000001; ++j) {
        if (!present[j]) {
          missing = j;
          break;
        }
      }
      results[i] = missing;
    }
    for (int i = 0; i < t; i++) {
      cout << results[i] << endl;
    }
  }
  return 0;
}

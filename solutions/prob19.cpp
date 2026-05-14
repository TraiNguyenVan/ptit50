#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  if (cin >> t) {
    vector<string> results(t);
    for (int i = 0; i < t; i++) {
      int n;
      cin >> n;
      set<char> digits;
      for (int j = 0; j < n; j++) {
        string s;
        cin >> s;
        for (char c : s)
          digits.insert(c);
      }
      ostringstream oss;
      bool first = true;
      for (char c : digits) {
        if (!first)
          oss << " ";
        oss << c;
        first = false;
      }
      results[i] = oss.str();
    }
    for (int i = 0; i < t; i++) {
      cout << results[i] << "\n";
    }
  }
  return 0;
}

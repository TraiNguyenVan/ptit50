#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  if (cin >> t) {
    vector<char> results(t);
    for (int i = 0; i < t; i++) {
      char c;
      cin >> c;
      if (c >= 'a' && c <= 'z') {
        results[i] = (char)(c - 32);
      } else if (c >= 'A' && c <= 'Z') {
        results[i] = (char)(c + 32);
      }
    }
    for (int i = 0; i < t; i++) {
      cout << results[i] << endl;
    }
  }
  return 0;
}

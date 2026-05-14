#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  if (cin >> t) {
    vector<bool> results(t);
    for (int i = 0; i < t; i++) {
      long long n;
      cin >> n;
      results[i] = (n % 100 == 86);
    }
    for (int i = 0; i < t; i++) {
      cout << results[i] << endl;
    }
  }
  return 0;
}

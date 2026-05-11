#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  if (cin >> t) {
    vector<long long> results(t);
    for (int i = 0; i < t; i++) {
      long long N;
      cin >> N;
      results[i] = N * (N + 1) / 2;
    }
    for (int i = 0; i < t; i++) {
      cout << results[i] << endl;
    }
  }
  return 0;
}

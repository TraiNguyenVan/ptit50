#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  if (cin >> t) {
    vector<long long> results(t);
    for (int i = 0; i < t; i++) {
      int N;
      cin >> N;
      vector<long long> A(N);
      for (int j = 0; j < N; ++j) {
        cin >> A[j];
      }
      sort(A.begin(), A.end());
      long long minDiff = -1;
      for (int j = 1; j < N; ++j) {
        long long diff = A[j] - A[j - 1];
        if (minDiff == -1 || diff < minDiff) {
          minDiff = diff;
        }
      }
      results[i] = minDiff;
    }
    for (int i = 0; i < t; i++) {
      cout << results[i] << endl;
    }
  }
  return 0;
}

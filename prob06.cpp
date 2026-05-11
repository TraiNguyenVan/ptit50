#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

bool isPrime(int n) {
  if (n < 2)
    return false;
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0)
      return false;
  }
  return true;
}

int main() {
  int a, b;
  if (cin >> a >> b) {
    int start = min(a, b);
    int end = max(a, b);
    for (int i = start; i <= end; ++i) {
      if (isPrime(i)) {
        cout << i << " ";
      }
    }
    cout << endl;
  }
  return 0;
}

#include <cmath>
#include <iostream>

using namespace std;

bool isBalanced(int num) {
  int evenCount = 0, oddCount = 0;
  while (num > 0) {
    int digit = num % 10;
    if (digit % 2 == 0)
      evenCount++;
    else
      oddCount++;
    num /= 10;
  }
  return evenCount == oddCount;
}

int main() {
  int n;
  if (cin >> n) {
    int start = pow(10, n - 1);
    int end = pow(10, n) - 1;
    int count = 0;
    for (int i = start; i <= end; ++i) {
      if (isBalanced(i)) {
        cout << i << " ";
        count++;
        if (count % 10 == 0) {
          cout << endl;
        }
      }
    }
  }
  return 0;
}

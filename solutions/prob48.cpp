#include <fstream>
#include <iostream>
#include <map>

using namespace std;

int main() {
  ifstream fin("DATA.in");
  int n;
  map<int, int> freq;
  while (fin >> n) {
    freq[n]++;
  }
  for (auto p : freq) {
    cout << p.first << " " << p.second << "\n";
  }
  return 0;
}

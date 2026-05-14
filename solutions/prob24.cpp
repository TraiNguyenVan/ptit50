#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream in("PTIT.in", ios::binary);
  ofstream out("PTIT.out", ios::binary);
  if (!in || !out)
    return 0;
  out << in.rdbuf();
  in.close();
  out.close();
  return 0;
}
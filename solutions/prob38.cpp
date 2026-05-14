#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
  string id;
  string name;
  string className;
  float score1, score2, score3;
};

bool compareStudents(const Student& a, const Student& b) {
  return a.id < b.id;
}

int main() {
  int n;
  if (!(cin >> n))
    return 0;
  vector<Student> students(n);
  for (int i = 0; i < n; ++i) {
    cin >> ws;
    getline(cin, students[i].id);
    getline(cin, students[i].name);
    getline(cin, students[i].className);
    cin >> students[i].score1 >> students[i].score2 >> students[i].score3;
  }

  sort(students.begin(), students.end(), compareStudents);

  for (int i = 0; i < n; ++i) {
    cout << i + 1 << " " << students[i].id << " " << students[i].name << " "
         << students[i].className << " " << fixed << setprecision(1) << students[i].score1 << " "
         << students[i].score2 << " " << students[i].score3 << endl;
  }

  return 0;
}

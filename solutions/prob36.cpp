#include <algorithm>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct Student {
  string id;
  string name;
  string className;
  string dob;
  float gpa;
};

string normalizeName(string name) {
  stringstream ss(name);
  string word;
  string res = "";
  while (ss >> word) {
    word[0] = toupper(word[0]);
    for (int i = 1; i < word.length(); ++i) {
      word[i] = tolower(word[i]);
    }
    res += word + " ";
  }
  if (res.length() > 0)
    res.pop_back();
  return res;
}

string normalizeDob(string dob) {
  if (dob[1] == '/')
    dob = "0" + dob;
  if (dob[4] == '/')
    dob.insert(3, "0");
  return dob;
}

bool compareStudents(const Student& a, const Student& b) {
  return a.gpa > b.gpa;
}

int main() {
  int n;
  if (!(cin >> n))
    return 0;
  vector<Student> students(n);
  for (int i = 0; i < n; ++i) {
    string id = "B20DCCN";
    string num = to_string(i + 1);
    id += string(3 - num.length(), '0') + num;
    students[i].id = id;
    cin >> ws;
    getline(cin, students[i].name);
    students[i].name = normalizeName(students[i].name);
    getline(cin, students[i].className);
    getline(cin, students[i].dob);
    students[i].dob = normalizeDob(students[i].dob);
    cin >> students[i].gpa;
  }
  sort(students.begin(), students.end(), compareStudents);
  for (int i = 0; i < n; ++i) {
    cout << students[i].id << " " << students[i].name << " " << students[i].className << " "
         << students[i].dob << " ";
    cout << fixed << setprecision(2) << students[i].gpa << endl;
  }
  return 0;
}

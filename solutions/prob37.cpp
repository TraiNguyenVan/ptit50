#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Employee {
  string id;
  string name;
  string gender;
  string dob;
  string address;
  string taxCode;
  string contractDate;
  int d, m, y;
};

bool compareEmployees(const Employee& a, const Employee& b) {
  if (a.y != b.y)
    return a.y < b.y;
  if (a.m != b.m)
    return a.m < b.m;
  return a.d < b.d;
}

int main() {
  int n;
  if (!(cin >> n))
    return 0;
  vector<Employee> employees(n);
  for (int i = 0; i < n; ++i) {
    string num = to_string(i + 1);
    employees[i].id = string(5 - num.length(), '0') + num;
    cin >> ws;
    getline(cin, employees[i].name);
    getline(cin, employees[i].gender);
    getline(cin, employees[i].dob);
    getline(cin, employees[i].address);
    getline(cin, employees[i].taxCode);
    getline(cin, employees[i].contractDate);

    string dStr = employees[i].dob.substr(0, 2);
    string mStr = employees[i].dob.substr(3, 2);
    string yStr = employees[i].dob.substr(6, 4);
    employees[i].d = stoi(dStr);
    employees[i].m = stoi(mStr);
    employees[i].y = stoi(yStr);
  }

  sort(employees.begin(), employees.end(), compareEmployees);

  for (int i = 0; i < n; ++i) {
    cout << employees[i].id << " " << employees[i].name << " " << employees[i].gender << " "
         << employees[i].dob << " " << employees[i].address << " " << employees[i].taxCode << " "
         << employees[i].contractDate << endl;
  }

  return 0;
}

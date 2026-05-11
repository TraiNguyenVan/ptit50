#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Person {
    string name;
    string dob;
    int d, m, y;
};

bool comparePersons(const Person& a, const Person& b) {
    if (a.y != b.y) return a.y < b.y;
    if (a.m != b.m) return a.m < b.m;
    return a.d < b.d;
}

int main() {
    int n;
    if (!(cin >> n)) return 0;
    vector<Person> persons(n);
    for (int i = 0; i < n; ++i) {
        cin >> persons[i].name >> persons[i].dob;
        string dStr = persons[i].dob.substr(0, 2);
        string mStr = persons[i].dob.substr(3, 2);
        string yStr = persons[i].dob.substr(6, 4);
        persons[i].d = stoi(dStr);
        persons[i].m = stoi(mStr);
        persons[i].y = stoi(yStr);
    }
    
    sort(persons.begin(), persons.end(), comparePersons);
    
    // youngest -> max DOB
    cout << persons.back().name << endl;
    // oldest -> min DOB
    cout << persons.front().name << endl;
    
    return 0;
}

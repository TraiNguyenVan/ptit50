#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <algorithm>
#include <cctype>

using namespace std;

string to_lower(string s) {
    string res = "";
    for (char c : s) res += tolower(c);
    return res;
}

int main() {
    ifstream f1("DATA1.in");
    ifstream f2("DATA2.in");
    
    set<string> s1, s2, u, i;
    string word;
    while (f1 >> word) {
        s1.insert(to_lower(word));
        u.insert(to_lower(word));
    }
    while (f2 >> word) {
        s2.insert(to_lower(word));
        u.insert(to_lower(word));
    }
    
    for (const string& w : s1) {
        if (s2.count(w)) {
            i.insert(w);
        }
    }
    
    bool first = true;
    for (const string& w : u) {
        if (!first) cout << " ";
        cout << w;
        first = false;
    }
    cout << "\n";
    
    first = true;
    for (const string& w : i) {
        if (!first) cout << " ";
        cout << w;
        first = false;
    }
    cout << "\n";
    
    return 0;
}

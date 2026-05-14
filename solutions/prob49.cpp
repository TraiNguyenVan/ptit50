#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <cctype>

using namespace std;

int main() {
    ifstream fin("VANBAN.in");
    string word;
    set<string> words;
    while (fin >> word) {
        string lower_word = "";
        for (char c : word) {
            lower_word += tolower(c);
        }
        words.insert(lower_word);
    }
    for (const string& w : words) {
        cout << w << "\n";
    }
    return 0;
}

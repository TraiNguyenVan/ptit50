#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}
int main() {
    string s;
    if (cin >> s) {
        for (char c : s) {
            if (!isVowel(c)) {
                cout << "." << (char)tolower(c);
            }
        }
        cout << "\n";
    }
    return 0;
}
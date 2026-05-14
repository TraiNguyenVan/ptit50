#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    string s;
    cin >> s;
    vector<int> st;
    for (int i = 0; i < s.length(); ++i) {
        st.push_back(i);
        if (st.size() >= 3) {
            int n = st.size();
            if (s[st[n-3]] == '1' && s[st[n-2]] == '0' && s[st[n-1]] == '0') {
                st.pop_back();
                st.pop_back();
                st.pop_back();
            }
        }
    }
    
    vector<int> rem;
    rem.push_back(-1);
    for (int idx : st) rem.push_back(idx);
    rem.push_back(s.length());
    
    int max_len = 0;
    for (size_t i = 1; i < rem.size(); ++i) {
        max_len = max(max_len, rem[i] - rem[i-1] - 1);
    }
    cout << max_len << "\n";
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) solve();
    }
    return 0;
}

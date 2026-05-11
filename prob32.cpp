#include <iostream>
#include <vector>
#include <set>
using namespace std;

void solve() {
    int n, m;
    if (!(cin >> n >> m)) return;
    set<int> a, b, u, i;
    for (int j = 0; j < n; ++j) {
        int x; cin >> x;
        a.insert(x);
        u.insert(x);
    }
    for (int j = 0; j < m; ++j) {
        int x; cin >> x;
        b.insert(x);
        u.insert(x);
        if (a.count(x)) {
            i.insert(x);
        }
    }
    for (auto it = u.begin(); it != u.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";
    for (auto it = i.begin(); it != i.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) solve();
    }
    return 0;
}

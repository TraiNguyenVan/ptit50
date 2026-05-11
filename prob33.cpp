#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(a.begin(), a.end());
    int l = 0, r = n - 1;
    vector<int> res;
    while (l <= r) {
        if (l == r) {
            res.push_back(a[l]);
            break;
        }
        res.push_back(a[r--]);
        res.push_back(a[l++]);
    }
    for (int i = 0; i < n; ++i) cout << res[i] << " ";
    cout << "\n";
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) solve();
    }
    return 0;
}

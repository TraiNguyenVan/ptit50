#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<int> results(t);
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        map<int, int> cnt;
        vector<int> a(n);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
            cnt[a[j]]++;
        }
        int res = 0;
        for (int j = 0; j < n; j++) {
            if (cnt[a[j]] > 1) res++;
        }
        results[i] = res;
    }
    for (int i = 0; i < t; i++) {
        cout << results[i] << "\n";
    }
    return 0;
}

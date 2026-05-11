#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<string> results(t);
    for (int i = 0; i < t; i++) {
        int n, d;
        cin >> n >> d;
        vector<int> a(n);
        for (int j = 0; j < n; j++) cin >> a[j];
        ostringstream oss;
        for (int j = d; j < n; j++) oss << a[j] << " ";
        for (int j = 0; j < d; j++) oss << a[j] << " ";
        results[i] = oss.str();
    }
    for (int i = 0; i < t; i++) {
        cout << results[i] << "\n";
    }
    return 0;
}

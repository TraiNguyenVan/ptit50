#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int t;
    if (cin >> t) {
        vector<vector<long long>> results(t);
        for (int i = 0; i < t; i++) {
            long long N;
            cin >> N;
            for (long long j = 2; j <= sqrt(N); j++) {
                while (N % j == 0) {
                    results[i].push_back(j);
                    N /= j;
                }
            }
            if (N > 1) {
                results[i].push_back(N);
            }
        }
        for (int i = 0; i < t; i++) {
            for (long long x : results[i]) {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

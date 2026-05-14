#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    if (cin >> t) {
        vector<vector<long long>> results(t);
        for (int i = 0; i < t; i++) {
            long long N;
            cin >> N;
            for (long long j = 2; j <= sqrt(N); ++j) {
                if (isPrime(j)) {
                    results[i].push_back(j * j);
                }
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

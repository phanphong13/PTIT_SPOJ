#include <bits/stdc++.h>

using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        map<int, int> m;
        for (int i = 2; i <= n; i++) {
            while (n % i == 0) {
                m[i]++;
                n /= i;
            }
            if (n == 1) break;
        }
        int sum = 0;
        for (auto it : m) {
            sum += it.second;
        }
        if (sum == 3 && m.size() == 3) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}
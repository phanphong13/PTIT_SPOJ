#include <bits/stdc++.h>

using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        map<int, int> m;
        for (int i = 2; i <= n; i++) {
            while(n % i == 0) {
                m[i]++;
                n /= i;
            }
            if (n == 1) break;
        }
        for (auto it : m) {
            cout << it.first << " " << it.second << " ";
        }
        cout << endl;
    }
    return 0;
}
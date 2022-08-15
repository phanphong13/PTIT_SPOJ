#include <bits/stdc++.h>

using namespace std;


bool check_snt(int n) {
    if (n < 2) return false;
    int i = 2;
    while (i <= sqrt(n)) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

int dem(int n) {
    if (n < 10) return n;
    return (n % 10) + dem(n / 10);
}

int main() {
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        if (check_snt(n)) {
            cout << "NO" << endl;
        } else {
            int countN = dem(n);
            map<int, int> m;
            for (int i = 2; i <= n; i++) {
                while(n % i == 0) {
                    m[i]++;
                    n /= i;
                }
                if (n == 1) break;
            }
            int sum = 0;
            for (auto it : m) {
                sum += dem(it.first) * it.second;
            }
            if (countN == sum) cout << "YES" << endl;
            else cout << "NO" << endl;
        }

    }
    return 0;
}
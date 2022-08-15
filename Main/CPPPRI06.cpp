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

int main() {
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        if (check_snt(n - 2)) cout << 2 << " " << n - 2 << endl;
        else {
            int j = 3;
            while (j <= n / 2) {
                if (check_snt(j) && check_snt(n -j)) {
                    cout << j << " " << n - j << endl;
                    break;
                }
                j += 2;
            }
        }
    }

    return 0;
}
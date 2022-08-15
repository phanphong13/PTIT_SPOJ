#include <bits/stdc++.h>

using namespace std;


int main() {
    int T; cin >> T;
    while (T--) {
        long long n; cin >> n;
        if (n > pow(10,12)) cout << 0 << endl;
        else {
            long long sum = 1;
            for (int i = 2; i < sqrt(n); i++) {
                if (n % i == 0) {
                    sum += i + n / i;
                }
            }
            int k = sqrt(n);
            if (k * k == n) sum += k;
            if (sum == n) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }
    return 0;
}
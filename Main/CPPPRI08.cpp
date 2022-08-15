#include <bits/stdc++.h> 
using namespace std;


int main() {
    int T; cin >> T;
    while (T--) {
        int n, p;
        cin >> n >> p;
        int result = 0;
        for (int i = 2; i <= n; i++) {
            int j = i;
            while (j % p == 0) {
                result++;
                j /= p;
            }
        }

        cout << result << endl;

    }

    return 0;
}
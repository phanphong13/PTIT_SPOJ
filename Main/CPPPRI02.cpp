#include <bits/stdc++.h>

using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        long long n;
        cin >> n;
        int result;
        for(int i = 2; i <= sqrt(n); i++) {
            while(n % i == 0){
                n /= i;
                result = i;
            }
        }
        if (n != 1) cout << n << endl;
        else cout << result << endl;
    }
    return 0;
}
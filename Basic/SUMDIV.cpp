#include <bits/stdc++.h>

using namespace std;

long long sum(long long a) {
    if (a == 1) return a;
    long long sum = 1 + a;
    for (long long i = 2; i < sqrt(a); i++) {
        if (a % i == 0) {
            sum += i + a / i;
        }
    }
    long long b = int(sqrt(a));
    if (b * b == a) {
        sum += b;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;
        cout << sum(a) << endl;
    }

    return 0;
}
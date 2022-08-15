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
    int a[100], result[10000];
    int max = 0;
    int T; cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> a[i];
        if (a[i] > max) max = a[i];
    }
    result[1] = 1;
    for (int i = 2; i <= max; i++) {
        if (i % 2 == 0) result[i] = 2;
        else if (check_snt(i)) result[i] = i;
        else {
            for (int j = 3; j <= sqrt(i); j += 2) {
                if (i % j == 0 && check_snt(j)) {
                    result[i] = j;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < T; i++) {
        for (int j = 1; j <= a[i]; j++) {
            cout << result[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
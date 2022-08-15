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
    int count = 1;
    if (max >= 2 ) result[0] = 2;

    for (int i = 3; i <= max; i += 2) {
        if (check_snt(i)) {
            result[count] = i;
            count++;
        }
    }
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < count; j++) {
            if (result[j] <= a[i]) {
                cout << result[j] << " ";
            } else break;
        }
        cout << endl;
    }
    return 0;
}
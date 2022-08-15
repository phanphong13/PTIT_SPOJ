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
    int a[10000], b[10000];
    cin >> a[0] >> b[0];
    int min = a[0], max = b[0];
    for (int i = 1; i < T; i++) {
        cin >> a[i] >> b[i];
        if (a[i] < min) min = a[i];
        if (b[i] > max) max = b[i];
    }
    int count = 0;
    int result[10000];
    for (int i = min; i <= max; i++) {
        if (check_snt(i)) {
            result[count++] = i;
        }
    } 
    
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < count; j++) {
            if (result[j] >= a[i] && result[j] <= b[i]) cout << result[j] << " ";
            else if (result[j] > b[i]) break;
        }
        cout << endl;
    }
    return 0;
}
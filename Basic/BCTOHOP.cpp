#include <bits/stdc++.h>

using namespace std;

int n, k;
int th[12];

void start() {
    for (int i = 1; i <= k; i++) {
        th[i] = i;
    }
}

void out() {
    for (int i = 1; i <= k; i++) {
        cout << th[i] << " "; 
    }
    cout << endl;
}

bool check = false;
void bctohop() {
    int i = k;
    while (i > 0 && th[i] == n - k + i) { i--;}
    if (i > 0) {
        th[i]++;
        for (int j = i + 1; j <= k; j++) {
            th[j] = th[i] + j - i;
        }
    } else {
        check = true;
    }
}



int main() {
    cin >> n >> k;
    start();
    do {
        out();
        bctohop();
    } while (!check);

    return 0;
}
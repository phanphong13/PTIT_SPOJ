#include <bits/stdc++.h>
using namespace std;

void bc(string s , int n) {
    if (s.length() == n) {
        cout << s << endl;
    } else {
        bc(s + "0", n);
        bc(s + "1", n);
    }
}

int main() {
    int n;
    cin >> n;
    bc("", n);
    return 0;
}
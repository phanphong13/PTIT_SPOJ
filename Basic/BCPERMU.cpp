#include <bits/stdc++.h>
using namespace std;

bool check(string s, string a) {
    bool ret = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == a[0]) {
            ret = true;
            break;
        }
    }
    return ret;
}

void bc(string s , int n) {
    if (s.length() == n) {
        cout << s << endl;
    } else {
        for (int i = 0; i < n; i++) {
            if (!check(s, to_string(i + 1))) {
                bc(s + to_string(i + 1), n);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    bc("", n);
    return 0;
}
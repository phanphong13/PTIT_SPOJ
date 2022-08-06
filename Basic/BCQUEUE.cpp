#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    queue<int> q;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        switch (a) {
            case 1: 
                cout << q.size() << endl;
                break;
            case 2: 
                if (q.empty()) cout << "YES" << endl;
                else cout << "NO" << endl;
                break;
            case 3:
                int num; cin >> num;
                q.push(num);
                break;
            case 4:
                if (!q.empty()) 
                    q.pop();
                break;
            case 5:
                if (!q.empty()) cout << q.front() << endl;
                else cout << -1 << endl;
                break;
            case 6:
                if (!q.empty()) cout << q.back() << endl;
                else cout << -1 << endl;
                break;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

long long GCD(long long a, long long b)
{
	if (a == 0 || b == 0)
	{
		return (a + b);
	}
	return GCD(b, a % b);
}

int main() {
    int T; cin >> T;
    while (T--) {
        long long a, x, y;
        cin >> a >> x >> y;
        long long gcd = GCD(x, y);
        for (int i = 0; i < gcd; i++) {
            cout << a;
        } 
        cout << endl;

    }
    return 0;
}
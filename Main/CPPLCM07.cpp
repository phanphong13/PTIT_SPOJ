#include <bits/stdc++.h>
using namespace std;

long long GCD(long long a, long long b)
{
	if (a == 0 || b == 0)
	{
		return (a + b);
	}
	return GCD(b, a % b);
}
long long LCM(long long a, long long b)
{
	return (a * b) / GCD(a, b);
}

long long check(long long a, int n) {
    long long t1 = pow(10, n - 1), t2 = pow(10, n);
    if (a >= t2) return -1;
    else {
        if (t1 % a == 0) return t1;
        else {
            return (t1 / a + 1) * a;
        }
    }
}

int main() {
    int T; cin >> T;
    while (T--) {
        int x,y,z,n;
        cin >> x >> y >> z >> n;
        cout << check(LCM(LCM(x,y), z), n) << endl;
    }

    return 0;
}
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

int main() {
    int T; cin >> T;
    while (T--) {
        int a,b;
        cin >> a >> b;
        cout << LCM(a,b) << " " << GCD(a, b) << endl;
    }

    return 0;
}
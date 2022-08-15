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

long long result(int a) { 
    long long re = 1;
    for (int i = 2; i <= a; i++) {
        re = LCM(re, i);
    }
    return re;
}

int main() {
    int T; cin >> T;
    while (T--) {
        int a;
        cin >> a;
        cout << result(a) << endl;
    }

    return 0;
}
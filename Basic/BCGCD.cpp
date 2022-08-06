#include <bits/stdc++.h>

using namespace std;

long long UCLN(long long a, long long b)
{
	if (a == 0 || b == 0)
	{
		return (a + b);
	}
	return UCLN(b, a % b);
}
long long BCNN(long long a, long long b)
{
	return (a * b) / UCLN(a, b);
}

int main() {
    while (true) {
        long long a, b;
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        cout << UCLN(a,b) << " " << BCNN(a,b) << endl;
    }
    return 0;    
}
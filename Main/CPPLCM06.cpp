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

void process(ll sumz, ll subz){
    ll a = (sumz + subz) / 2;
    ll b = sumz - a;
    if (a*2 != sumz + subz){
        cout << "No\n";
        return;
    }
    ll tmp = GCD(a,b);
    if (tmp == 1) cout << "Yes\n";
    else cout << "No\n";
}

int main() {
    int T; cin >> T;
    while (T--) {
        ll n,m;
        cin >> n >> m;
        ll sub = m;
        ll sum = (n + 1) * n / 2;
        process(sum, sub);

    }
    return 0;
}
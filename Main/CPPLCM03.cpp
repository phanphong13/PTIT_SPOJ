#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9+7;
 
ll POW(ll a, ll b){
    if (b == 1) return a;
    if (b % 2 == 0) return POW(a*a%MOD,b/2)%MOD;
    else return a*POW(a*a%MOD,b/2)%MOD;
}

ll GCD(ll a, ll b)
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

long long result(vector<int> a) { 
    long long re = GCD(a[0], a[1]);
    long long sub = 1;
    for (int i = 0; i < a.size(); i++) {
        re = GCD(re, a[i]);
        sub *= a[i];
        sub %= MOD;
    }
    return POW(sub, re);
}

int main() {
    int T; cin >> T;
    while (T--) {
       int n; cin >> n;
       vector<int> a;
       while(n--) {
            int b; cin >> b;
            a.push_back(b);     
       }
       cout << result(a) << endl;
    }

    return 0;
}
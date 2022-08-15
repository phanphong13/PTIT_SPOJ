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


ll reduceB(ll a, string b) { 
    ll mod = 0; 
    for (int i=0; i<b.length(); i++) 
        mod = (mod*10 + b[i] - '0')%a; 
  
    return mod; 
}

int main() {
    int T; cin >> T;
    while (T--) {
        long long a;
        string s;
        cin >> a >> s;
        cout << GCD(a, reduceB(a, s)) << endl;

    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

ifstream inp("DP_A1.inp");
ofstream out("DP_A1.out");
typedef long long ll;

ll n, m, f[100000] = { 0 };

ll fib(ll x) {
	if (f[x] != 0) return f[x];
	if (x == 0) return 0;
	if (x < 3) return 1;
	ll a = fib(x - 1) + fib(x - 2);
	f[x] = a;
	return f[x];
}

int main() {
	cin >> n;
	for (ll i = 0; i < n; i++) {
		cin >> m;
		cout << fib(m) << endl;
	}
}

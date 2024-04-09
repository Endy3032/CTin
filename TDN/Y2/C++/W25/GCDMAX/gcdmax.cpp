#include <bits/stdc++.h>
using namespace std;

ifstream inp("GCDMAX.inp");
ofstream out("GCDMAX.out");
// #define cin inp
// #define cout out

typedef long long ll;
ll n, o = 0;

void test(vector<ll> &base, vector<ll> &v) {
	for (ll i = 1; i < n; i++) {
		v[i] = max(v[i], __gcd(base[i] - 1, v[i - 1]));
		v[i] = max(v[i], __gcd(base[i], v[i - 1]));
		v[i] = max(v[i], __gcd(base[i] + 1, v[i - 1]));
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	vector<ll> ns(n), ns1;
	for (ll &i: ns) cin >> i;

	ns1 = vector<ll>(n, 0);
	ns1[0] = ns[0] - 1;
	test(ns, ns1);
	o = max(o, ns1[n - 1]);

	ns1 = vector<ll>(n, 0);
	ns1[0] = ns[0];
	test(ns, ns1);
	o = max(o, ns1[n - 1]);

	ns1 = vector<ll>(n, 0);
	ns1[0] = ns[0] + 1;
	test(ns, ns1);
	o = max(o, ns1[n - 1]);

	cout << o << endl;
}

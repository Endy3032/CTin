#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, mx = 0, d = LLONG_MAX;

struct Pair {
	ll a, b, d;

	void read() {
		cin >> a >> b;
		d = abs(a - b);
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	vector<Pair> p(n);
	map<ll, ll> m;

	for (ll i = 0; i < n; i++) {
		p[i].read();
		m[p[i].d]++;
		mx = max(mx, m[p[i].d]);
	}

	for (auto i: m) {
		if (i.second == mx) d = min(d, i.first);
	}

	cout << d << endl;
	for (auto i : p) {
		if (i.d == d) cout << i.a << " " << i.b << endl;
	}
}

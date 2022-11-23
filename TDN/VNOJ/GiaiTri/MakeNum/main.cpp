#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, m;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (ll x = 0; x < n; x++) {
		cin >> m;

		vector<ll> o(m);
		for (ll y = 0; y < m; y++) cin >> o[y];
		sort(o.begin(), o.end());

		vector<ll> a, b, r;
		for (ll y = 0; y < m; y++) {
			if (y % 2 == 0) b.push_back(o[y]);
			else a.push_back(o[y]);
		}
		if (a.size() < b.size()) a.insert(a.begin(), 0);

		ll rem = 0;
		for (ll y = a.size() - 1; y >= 0; y--) {
			ll c = a[y] + b[y];
			r.insert(r.begin(), (c + rem) % 10);
			rem = (c + rem) / 10;
		}
		if (rem > 0) r.insert(r.begin(), rem);

		for (ll y = 0; y < r.size(); y++) {
			if (r[y] == 0 && y == 0) continue;
			cout << r[y];
		}
		cout << endl;
	}
}

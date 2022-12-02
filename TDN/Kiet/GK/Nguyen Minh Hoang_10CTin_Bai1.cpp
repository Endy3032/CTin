#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, x, y, m = 0;

int main() {
	// freopen("SComputer1.inp", "r", stdin);
	// freopen("SComputer1.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	vector<ll> c(n), d(n);
	vector<pair<ll, ll>> a(n), b;

	for (ll i = 0; i < n; i++) {
		cin >> x >> y;
		a[i] = make_pair(x, y);
	}

	b = a;
	sort(b.begin(), b.end());

	for (ll i = 0; i < n; i++) {
		auto f = find(a.begin(), a.end(), b[i]);
		c[i] = f - a.begin();
	}

	for (ll i = 0; i < n - 1; i++) {
		ll r = 1, j = i + 1;
		vector<ll> e;

		x = b[i].first, y = b[i].second;
		e.push_back(c[i]);

		while (j < n) {
			if (b[j].first >= y) {
				x = b[j].first;
				y = b[j].second;
				e.push_back(c[j]);
				r++;
			}
			j++;
		}

		if (r > m) {
			d = e;
			m = r;
		}
	}

	cout << m << endl;
	for (auto i : d) cout << i + 1 << " ";
	cout << endl;
}

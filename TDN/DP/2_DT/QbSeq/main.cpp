#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t, m, n, d;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	cin >> n >> d;
	ll s = 0, c = 0;
	map<ll, pair<ll, ll>> r = { { 0, { 0, 0 } } };

	for (ll i = 1; i <= n; i++) {
		cin >> c;
		s += c;
		m = s % d;

		if (r[m].first == 0 && m != 0) r[m].first = i;
		r[m].second = i;
	}

	ll mx = 0;
	for (auto i : r) {
		auto x = i.second;
		mx = max(mx, x.second - x.first);
	}
	cout << mx << endl;
}

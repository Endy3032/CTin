#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t, n, d;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> t;
	while (t--) {
		cin >> d >> n;
		ll s = 0, c = 0;
		map<ll, ll> r = { {0, 1} };

		for (ll i = 1; i <= n; i++) {
			cin >> c;
			s += c;
			r[s % d]++;
		}

		c = 0;
		for (auto i : r) {
			ll x = i.second;
			c += x * (x - 1) / 2;
		}
		cout << c << endl;
	}
}
